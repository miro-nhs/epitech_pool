{-
-- EPITECH PROJECT, 2023
-- PDG
-- File description:
-- Tree
-}

data Tree a = Node (Tree a) a (Tree a) | Empty
    deriving (Show)

addInTree :: Ord a => a -> Tree a -> Tree a
addInTree a Empty = Node Empty a Empty
addInTree a (Node xt yt zt)
    |a < yt = Node (addInTree a xt) yt zt
    |otherwise = Node xt yt (addInTree a zt)

instance Functor Tree where
    fmap f (Node l x r) = Node (fmap f l) (f x) (fmap f r)
    fmap _ Empty = Empty

listToTree :: Ord a => [a] -> Tree a
listToTree [] = Empty
listToTree (x:xs) = addInTree x (listToTree xs)

treeToList :: Ord a => Tree a -> [a]
treeToList Empty = []
treeToList (Node xt yt zt) = treeToList xt ++ [yt] ++ treeToList zt

treeSort :: Ord a => [a] -> [a]
treeSort xs = treeToList (listToTree xs)
