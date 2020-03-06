setUnion a b = a ++ filter (predicate a) b where predicate xs x = not (elem x xs)

setIntersect a b = filter (control a) b where control xs x = elem x xs

setSubtract a b = filter (check b) a where check xs x = not(elem x xs)

setThreeSub a b c = setSubtract (setSubtract a b) c
