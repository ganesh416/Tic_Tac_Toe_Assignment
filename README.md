**Project overview :** 
Objective : Create a functional and interactive Tic-Tac-Toe game that can be played between two players. The project will involve designing a user interface, implementing game logic.

**Key Components :**
User Interface (UI)
   1). board Design: Create a 3x3 grid to represent the Tic-Tac-Toe board by using 2D array.
   2). Instructions : Give instructions to players, which type of signs/marks('X' or 'O') to each player. 
   3). User Input: Allow players to there names and place their signs/marks (X or O) by using rows (0-2) and columns (0-2).
   4). Display: Show the current state of the board, player turns, and game status (win, draw).
   5). Replay/reset : show the conitinue option/replay option, when game status(Win or Draw).
   
**Game Logic**
  1). Turn Management/swicthing players: Alternate turns between two players.
  2). Win Condition: Check for win conditions (three in a row horizontally, vertically, or diagonally).
  3). Draw Condition: Determine if the game is a draw (all cells filled without a winner).
  4). Reset Function: Provide an option to reset the game and start a new match.
  
 **Multiplayers**
    1). Local Multiplayer: Allow two players to play on the same device.

**Technology used**
1) C language : 2d arrays, functions, global and local variables, loops, if else and if else if conditions, strings, Macros, makefiles ect.

**Features**
   1). 3x3 grid for the board.
   2). Player X and O placement.
   3). Turn alternation.
   4). Win/draw detection.
   5). Game reset option.

**Conclusion**
The Tic-Tac-Toe project is a great way to learn and implement fundamental programming concepts, including user input handling, game logic.

--------------------------------------------------------------------------------------------------------------------------------------------

**Instructions to compile and run the program.**

**compile**
 1) C Compiler: GCC (GNU Compiler Collection) is commonly used, to write code in C language.
 2) I wrote the code in different files like
     A). main() function writed in   ---> "Tic_Tac_Toe.c" file.
     B). function definations are writed in   ---->  "tic_tac_toe_functions_definations.c" file
     c). Header files, function prototypes and Macro declared in ---> "tic_tac_toe.h"   file
     d). with help makefile, will execute program.
    
after downloading all files.
4) To execute the code use "make" command on terminal screen

**run the program** -->
 To Run the code use "./a.out" command on terminal screen  and for deleting executable files and a.out file use "make clean" command on terminal screen.

 

----------------------------------------------------------------------------------------------------------------------------------------------
**Description of the game rules.**

    
1). Board Layout: The game is played on a 3x3 grid. Each cell of the grid can be empty, marked with an 'X', or marked with an 'O'.
   
2). Player Turns: There are two Locol players, Player1 and Player2, each play Player have assign respective marks are signs ('X' or 'O'), Players take turns placing their mark (X or O) 
in an empty cell on the grid. 

3) Winning the Game: A player wins if they have three of their marks in a horizontal, vertical, or diagonal row.
   
4). Draw: The game is a draw if all cells are filled and no player has achieved a winning combination.

5). Input: Players input their moves by specifying the row and column numbers of the desired cell. Rows and columns are typically indexed from 0 to 2.

6). Valid Moves: A move is valid if the chosen cell is within the bounds of the 3x3 grid and is empty and cell is empty space.


----------------------------------------------------------------------------------------------------------------------------------------------------

**Used functions**
1). initializeBoard(): setup the initail state of the board with 3x3 grid.
2). PrintBoard(): Display the current state of the board.
3). PlayerMove(): Handle players move input and update the board.
4). checkWin():  check the win, which player win the game.
5). checkDraw():  if no match(horizontal, vertical, or diagonal), but all gits/cell filled.
6). switchplayer(): switch turns between players one after other.
7). read_players_name(): read the player names

     


