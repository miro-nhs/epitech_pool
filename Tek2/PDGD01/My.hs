{-
-- EPITECH PROJECT, 2023
-- PDG
-- File description:
-- my
-}

mySucc :: Int -> Int
mySucc x = x + 1

myIsNeg :: Int -> Bool
myIsNeg x
    | x < 0 = True
    | otherwise = False

myAbs :: Int -> Int
myAbs x
    | x < 0 = x * (-1)
    | otherwise = x * 1

myMin :: Int -> Int -> Int
myMin x y
    | x < y = x
    | otherwise = y

myMax :: Int -> Int -> Int
myMax x y
    | x > y = x
    | otherwise = y

myTuple :: a -> b -> (a, b)
myTuple a b = (a, b)

myTruple :: a -> b -> c -> (a, b, c)
myTruple a b c = (a, b, c)

myFst :: (a, b ) -> a
myFst (a, b) = a

mySnd :: (a, b ) -> b
mySnd (a, b) = b

mySwap :: (a, b) -> (b, a)
mySwap (a, b) = (b, a)

myHead:: [a] -> a
myHead [] = error("empty list")
myHead (x:_) = x

myTail:: [a] -> [a]
myTail [] = error("empty list")
myTail (_:xs) = xs

myLength :: [a] -> Int
myLength [] = 0
myLength (x:xs) = 1 + myLength xs

myNth :: [a] -> Int -> a
myNth (x:xs) i = case i < 0 of
    True -> error "Negative index"
    False -> case i >= myLength (x:xs) of
        True -> error "Index out of range"
        False -> case i == 0 of
            True -> x
            False -> myNth xs (i - 1)

myTake :: Int -> [a] -> [a]
myTake _ [] = error "empty list"
myTake i (x:xs) = case i >= myLength (x:xs) of
    True -> (x:xs)
    False -> case i < 0 of
        True -> error "Negative index"
        False ->case i == 0 of
            True -> []
            False -> x : myTake (i - 1) xs

myDrop :: Int -> [a] -> [a]
myDrop i (x:xs) = case i >= myLength (x:xs) of
        True -> []
        False -> case i == 0 of
                True -> (x:xs)
                False -> myDrop (i - 1) xs

myAppend :: [a] -> [a] -> [a]
myAppend (x:xs) y = x : myAppend xs y
myAppend [] x = x

myReverse :: [a] -> [a]
myReverse = \list ->
    case list of
        [] -> []
        x:xs -> myAppend (myReverse xs) [x]

myInit :: [a] -> [a]
myInit [] = error("empty list")
myInit [x] = []
myInit (x:xs) = x : myInit xs

myLast :: [a] -> a
myLast [] = error("empty list")
myLast [x] = x
myLast (x:xs) = myLast xs

myZip :: [a] -> [b] -> [(a, b)]
myZip [] _ = []
myZip _ [] = []
myZip (x:xs) (y:ys) = (myTuple x y) : myZip xs ys

myUnzip :: [(a, b)] -> ([a], [b])
myUnzip [] = ([],[])
myUnzip ((a,b):xs) = (a:(myFst (myUnzip xs)), b:(mySnd (myUnzip xs)))

myMap :: (a -> b) -> [a] -> [b]
myMap x [] = []
myMap x (y:ys) = x y : myMap x ys

myFilter :: (a -> Bool) -> [a] -> [a]
myFilter _ [] = []
myFilter y (x:xs) = case y x of
    True ->(x:myFilter y xs)
    False -> myFilter y xs

myFoldl :: (b -> a -> b) -> b -> [a] -> b
myFoldl _ b [] = b
myFoldl x b (y:ys) = myFoldl x (x b y) ys

myFoldr :: (a -> b -> b) -> b -> [a] -> b
myFoldr _ b [] = b
myFoldr x b (y:ys) = myFoldr x (x (myLast (y:ys)) b )
    (myTake (myLength (y:ys) - 1 ) (y:ys))

myPartition :: (a -> Bool) -> [a] -> ([a], [a])
myPartition _ [] = ([], [])
myPartition y (x:xs) = case y x of
    True -> ((x:myFst(myPartition y xs)), mySnd(myPartition y xs))
    False -> (myFst(myPartition y xs), x:mySnd(myPartition y xs))

myQuickSort :: (a -> a -> Bool) -> [a] -> [a]
myQuickSort _ [] = []
myQuickSort y (x:xs) = myAppend (myAppend (myQuickSort y (mySnd (myPartition
    (y x) xs))) [x] )(myQuickSort y (myFst (myPartition (y x) xs)))