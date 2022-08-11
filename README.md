Que.1: 

You are required to write a program to sort the (name, age, height) tuples by ascending order where
name is string, age and height are numbers. The tuples are input by console. The sort criteria is:
1: Sort based on name; 2: Then sort based on age; 3: Then sort by score. The priority is that
name > age > score
If the following tuples are given as input to the program: 
Tom,19,80 
John,20,90 
Jony,17,91

Jony,17,93 Json,21,85 Then, the output of the program should be: 
[(’John’, ’20’, ’90’), (’Jony’,’17’, ’91’), (’Jony’, ’17’, ’93’), (’Json’, ’21’, ’85’), (’Tom’, ’19’, ’80’)]

Que.2:

Define a class with a generator which can iterate the numbers, which are divisible by 7, between a
given range 0 and n.


Que.3:

Please write a program using a generator to print the numbers which can be divisible by 5 and 7
between 0 and n in comma separated form while n is input by console.

Example: If the following n is given as input to the program: 100
Then, the output of the program should be: 0,35,70


Que.4:

Create a function that takes a list of football clubs with properties: name, wins, loss, draws, scored,
conceded, and returns the team name with the highest number of points. If two teams have the
same number of points return the team with the largest goal difference.

How to Calculate Points and Goal Difference

team = { ”name”: ”Manchester United”, ”wins”: 30, ”loss”: 3, ”draws”: 5, ”scored”: 88, ”conceded”: 20 }

Total Points = 3 * wins + 0 * loss + 1 * draws = 3 * 30 + 0 * 3 + 5 * 1 = 95 points Goal Difference
= scored - conceded = 88 - 20 = 68