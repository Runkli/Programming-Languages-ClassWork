import Data.Char
import Data.List

makeUpper "" = ""
makeUpper (x:xs) = ([toUpper x]) ++ makeUpper(xs)

cap [] = []
cap (x:xs) = [[toUpper (head x)]++(tail x)] ++ cap(xs)
capitaliseEachWord x = unwords (cap (words x))

tupleHelper l = [(head l,last l)]++ tupleHelper (tail(init l))
createTuples [] = []
createTuples l = tupleHelper (sort l) 
