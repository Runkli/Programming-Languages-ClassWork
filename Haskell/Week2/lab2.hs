
--factorial
factorial x y = if  y == 1 then x
				else x * factorial x (y-1)
				
--counts vowels
vowelcounter (x:xs) = 1 + length [x | x<-xs, (elem x ['a','e','i','o','u'])]
			
pattern x = if x== 5 then 1-x
			else if x == 10 then x/x^2
			else x
			
data ThreeDShapes = Cube Float | Cylinder Float Float deriving (Show)

volume (Cube slength) = slength^3
volume (Cylinder radius height) = height*radius^2 * 3.14

surface (Cube slength) = 6*slength^2
surface (Cylinder radius height) = 2 * 3.14 * radius * height + 2 * 3.14 * radius^2

--gpa calculator
evalGrade x = if x=='A' then 4 else if x=='B' then 3 
			else if x=='C' then 2 else if x=='D' then 1 else 0

sumgrades [] [] = 0

sumgrades x y = evalGrade(head x) * head(y) + (sumgrades (tail x) (tail y))

sumcredits [] = 0
sumcredits (x:xs) = x + sumcredits xs

calculategpa x y = (sumgrades x y) / (sumcredits y)

