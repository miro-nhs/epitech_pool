{-
-- EPITECH PROJECT, 2023
-- PDG
-- File description:
-- Game
-}

data Item = Sword | Bow | MagicWand
    deriving (Eq)

instance Show Item where
    show = showItem

showItem :: Item -> String
showItem (Sword) = "sword"
showItem (Bow) = "bow"
showItem (MagicWand) = "magic wand"

data Mob = Mummy | Skeleton Item | Witch (Maybe Item)
    deriving (Eq)

createMummy :: Mob
createMummy = Mummy

createArcher :: Mob
createArcher = Skeleton Bow

createKnight :: Mob
createKnight = Skeleton Sword

createWitch :: Mob
createWitch = Witch Nothing

createSorceress :: Mob
createSorceress = Witch (Just MagicWand)

create :: String -> Maybe Mob
create "mummy" = Just createMummy
create "doomed archer" = Just createArcher
create "dead knight" = Just createKnight
create "witch" = Just createWitch
create "sorceress" = Just createSorceress

equip :: Item -> Mob -> Maybe Mob
equip _ mummy = Nothing
equip item (Skeleton _) = Just (Skeleton item)
equip item (Witch _) = Just (Witch (Just item))

instance Show Mob where
    show = showMob

showMob :: Mob -> String
showMob (Skeleton a)
    |a == Bow = "dommed archer"
    |a == Sword =  "dead knight"
    |otherwise = "skeleton holding a" ++ (show a)
showMob (Mummy) = "mummy"
showMob (Witch a) = if a == Nothing then "witch" else "sorceress"

class HasItem c where
    getItem :: c -> Maybe Item
    hasItem :: c -> Bool
    hasItem a = case getItem a of
        Just a -> True
        Nothing -> False

instance HasItem Mob where
    getItem (Skeleton a) = Just a
    getItem (Witch (Just a)) = Just a
    getItem _ = Nothing
