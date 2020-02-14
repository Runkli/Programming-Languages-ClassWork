-- sum a list excluding the first and last elements
listsum x = sum (init(tail x))

--add element if not in a list then print
listcheck x list = if x `elem` list then list
				   else (list ++ [x])
					
--return the third element in a 3-tuple
tupthird (_,_,a) = a

--get the max element out of two lists
maxtwolists x y = maximum(x++y)

--euclidean distance in 2D
dist x1 x2 y1 y2 = sqrt( (x2-x1)^2 + (y2-y1)^2 )

--wage calculator. (check lab1 manual for description)
hmm clss regular overtime = if(clss == 1) then (10*regular)
              else if(clss == 2 || clss == 3) then (7*regular + overtime*7*1.5)
							else if(clss == 4) then (5*regular + overtime*5*2)
							else (-1)
						

