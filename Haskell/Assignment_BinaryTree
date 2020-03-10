data Tree a = Leaf | Node a (Tree a) (Tree a)
            deriving (Eq, Show)

main = do
    let l1 = ["A1-Gate", "North-Region", "South-Region", "Convention Center", 
              "Rectorate", "Academic Building1", "Academic Building2"]
    let l2 = [0.0, 0.5, 0.7, 0.3, 0.6, 1.2, 1.4, 1.2]
    print $ treeFromList $ zip l1 l2

mkNode :: a -> Tree a
mkNode x = Node x Leaf Leaf

insertValue :: Tree a -> a -> Tree a
insertValue Leaf y = mkNode y
insertValue (Node x left right) y
    | isComplete left && nodeCount left /= nodeCount right = Node x left (insertValue right y)
    | otherwise = Node x (insertValue left y) right
    where nodeCount Leaf = 0
          nodeCount (Node _ left right) = 1 + nodeCount left + nodeCount right
          depth Leaf = 0
          depth (Node _ left right) = 1 + max (depth left) (depth right)
          isComplete n = nodeCount n == 2 ^ (depth n) - 1

treeFromList :: (Show a) => [a] -> Tree a
treeFromList = foldl insertValue Leaf
