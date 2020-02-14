listsum x = sum (init(tail x))
listcheck x list = if x `elem` list then list
				   else (list ++ [x])
					
tupthird (_,_,a) = a


maxtwolists x y = maximum(x++y)

dist x1 x2 y1 y2 = sqrt( (x2-x1)^2 + (y2-y1)^2 )

hmm clss regular overtime = if(clss == 1) then (10*regular)
              else if(clss == 2 || clss == 3) then (7*regular + overtime*7*1.5)
							else if(clss == 4) then (5*regular + overtime*5*2)
							else (-1)
						

