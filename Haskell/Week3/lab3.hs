repli n [] = []
repli n (x:xs) = replicate n x ++ repli n xs


compress (x:[]) = []
compress (x:xs) = if (x == head xs) then compress(xs)
				  else [x]++compress xs
				  
	

	
data Tree = EmptyTree | Node Integer Tree Tree deriving (Show, Eq, Ord)

insertElement x EmptyTree = Node x EmptyTree EmptyTree
insertElement x (Node a left right) = if x == a then (Node x left right)
									else if x < a then (Node a (insertElement x left) right)
									else Node a left (insertElement x right)



ins (x:xs) t = ins xs (insertElement x t)

