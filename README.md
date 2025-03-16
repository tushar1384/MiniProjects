I have done 2 minor projects.
<br>
****** My first project is a "GuessNoGame". ******
<br>
------- Workflow of GuessNoGame.c ----
<br>
The program is a simple number guessing game. Here’s its workflow:
<br>
Initialization:

Includes necessary headers: <stdio.h>, <time.h>, and <stdlib.h>.
<br>
Declares variables:
<br>
guess (stores user input).
<br>
noofguess (keeps count of attempts).
<br>
Uses srand(time(NULL)) to seed the random number generator.
<br>
Generating the Random Number:
<br>
Picks a random number a between 1 and 100 using rand() % 100 + 1.
<br>
Game Loop:
<br>
Prompts the user to guess a number between 1 and 100.
<br>
Reads the user’s input (scanf("%d", &guess);).
<br>
Increments the guess count (noofguess++).
<br>
Checks Conditions:
<br>
If guess == a:
<br>
Displays a congratulatory message with the number of attempts.
<br>
Exits the loop (break;).
<br>
If guess > a:
<br>
Asks the user to enter a smaller number.
<br>
If guess < a:
<br>
Asks the user to enter a larger number.
<br>
Exit Condition:
<br>
The loop runs until the correct guess is made or the user enters 5 (which seems like a bug, possibly meant to exit the game).
<br>
Game End Messages:
<br>
Displays a farewell message: "Bye Bye Thanks for playing."
<br>
Displays game credit: "Game Developed by: Tushar Sharma" 

<br>

****** My second Project is "SnakeWaterGun" game. *****
<br>
Workflow of SnakeWaterGun.c
<br>
The program implements a Snake-Water-Gun game where the user plays against the computer.
<br>
1. Initial Setup:
<br>
Includes <stdio.h>, <time.h>, and <stdlib.h>.
<br>
Declares user (stores user’s choice) and noofguess (counts attempts).
<br>
Seeds the random number generator with srand(time(NULL)).
<br>


2. Computer’s Choice:
<br>
Generates a random number random = rand() % 3 + 1 (1 → Snake, 2 → Water, 3 → Gun).
<br>


3. Game Loop:
<br>
Displays options:
<br>
1 -> Snake, 2 -> Water, 3 -> Gun, 4 -> Exit
<br>

Reads user input (scanf("%d", &user)).
<br>
Checks the game rules:
<br>
Snake beats Water
<br>
Water beats Gun
<br>
Gun beats Snake
<br>
If both choices are the same, it’s a tie.
<br>



4. Exit Condition:
<br>
The game continues until the user enters 4.
<br>


5. Game End:
<br>
Displays a farewell message and developer credit.   
