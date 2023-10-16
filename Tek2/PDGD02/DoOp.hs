{-
-- EPITECH PROJECT, 2023
-- PDG
-- File description:
-- DoOp
-}

import Data.Char
import Prelude

myIsOnlyDigit :: [Char] -> Bool
myIsOnlyDigit x = all isDigit x

myIsSpace :: [Char] -> Bool
myIsSpace x = all isSpace x

myFst :: (a, b ) -> a
myFst (a, b) = a

mySnd :: (a, b ) -> b
mySnd (a, b) = b

myLength :: [a] -> Int
myLength [] = 0
myLength (x:xs) = 1 + myLength xs

myAppend :: [a] -> [a] -> [a]
myAppend (x:xs) y = x : myAppend xs y
myAppend [] x = x

myElem :: Eq a => a -> [a] -> Bool
myElem _ [] = False
myElem a (x:xs)
    |a == x = True
    |otherwise = myElem a xs

safeDiv :: Int -> Int -> Maybe Int
safeDiv _ 0 = Nothing
safeDiv x y = Just (x `div` y)

safeNth :: [a] -> Int -> Maybe a
safeNth x i
    |i < 0 = Nothing
    |i >= length x = Nothing
safeNth (x:xs) i = if i == 0 then Just x else safeNth xs (i - 1)

safeSucc :: Maybe Int -> Maybe Int
safeSucc Nothing = Nothing
safeSucc x  = fmap(+1)x

myLookup :: Eq a => a -> [(a, b)] -> Maybe b
myLookup _ [] = Nothing
myLookup y (x:xs)
    |y == myFst x = Just (mySnd x)
    |otherwise = myLookup y xs

maybeDo :: (a -> b -> c) -> Maybe a -> Maybe b -> Maybe c
maybeDo _ Nothing _ = Nothing
maybeDo _ _ Nothing = Nothing
maybeDo x (Just y) (Just z) = Just (x y z)

readInt :: [Char] -> Maybe Int
readInt [] = Nothing
readInt x = case myIsOnlyDigit x of
    False -> Nothing
    True -> Just (read x :: Int)

getLineLength :: IO Int
getLineLength = do
    input <- getLine
    return (myLength input)

printAndGetLength :: String -> IO Int
printAndGetLength x = putStrLn x >>
    return (myLength x)

printBox :: Int -> IO ()
printBox 0 = return ()
printBox x
    |x <= 0 = return ()
    |x == 1 = putStrLn ("++")
    |otherwise = putStrLn ('+':edgeBox ((x*2))) >>
    putIntermediatesLines (getIntermediateLines (x - 2) x) >>
    putStrLn ('+':edgeBox ((x*2)))

putIntermediatesLines :: [String] -> IO ()
putIntermediatesLines [] = return ()
putIntermediatesLines (x:xs) = putStrLn x >>
    putIntermediatesLines xs

getIntermediateLines :: Int -> Int -> [String]
getIntermediateLines 0 _ = []
getIntermediateLines x y = ('|':(myAppend ( line((y * 2) - 1)) "|")):
    getIntermediateLines (x - 1) y

line :: Int -> String
line 0 = []
line 1 = []
line x = ' ':line (x - 1)

edgeBox :: Int -> String
edgeBox 1 = []
edgeBox 2 = ['+']
edgeBox x = '-':edgeBox (x - 1)

concatLines :: Int -> IO String
concatLines x = do
    str <- getLine
    r <- concatLines (x - 1)
    return (str ++ r)

getInt :: IO (Maybe Int)
getInt = do
    r <- getLine
    return (readInt r)
