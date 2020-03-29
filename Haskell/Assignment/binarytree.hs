--Ilknur Mustafazade, 2350460
--CNG242, Assignment 1

l1 = ["A1-Gate", "North-Region", "South-Region", "Convention Center",  "Rectorate", "Academic Building1", "Academic Building2","CCP1","CCP2","RP1","RP2","AB1P1","AB1P2","AB2P1","AB2P2"]

l2 = [ 0.5, 0.7, 0.3, 0.6, 1.2, 1.4, 1.2, 0.8, 0.7, 0.5, 0.7, 1.3, 1.4, 1.5]


data Tree a = Empty | Node {name::String, lcost::Double, lbranch::(Tree a), rcost::Double, rbranch::(Tree a)} deriving (Show,Eq)


getn list n = if n < length list then list !! n
    		      else if (n < length list) then list !! n
    		      else 0


insertNode names costs tree node = if ((length names) <= node) then Empty
				else Node (names !! node) (getn costs (2*node)) (insertNode names costs tree (2*node+1)) (getn costs (2*node+1)) (insertNode names costs tree (2*node+2))


createBT names costs = insertNode names costs Empty 0


leafCosts tree cost = if ((lbranch tree) == Empty && 
					(rbranch tree) == Empty) 
				then [(name tree, cost)]
				else []++ leafCosts (lbranch tree) (cost+(lcost tree)) ++ leafCosts (rbranch tree) (cost+(rcost tree))
    

allCosts tree cost = if ((lbranch tree) == Empty && (rbranch tree) == Empty) then
				[(name tree, cost)]
    				else [] ++ allCosts (lbranch tree) (cost+(lcost tree)) ++ allCosts (rbranch tree) (cost+(rcost tree)) ++ [(name tree, cost)]


findNode [] name = ("Node not found", 0.0)
findNode names name = if (fst (head names)) == name then (head names)
    			else findNode (tail names) name



--Assignment functions:
showparkingcosts tree = leafCosts tree 0
showallcosts tree = allCosts tree 0
searchandcalculatecost tree name = findNode (allCosts tree 0) name



