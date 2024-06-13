
#include "tic_tac_toe.h"


//define char 2D array globally it needs to update board with players inputs 
char board[SIZE][SIZE];

// store the players names 
char player1[10];
char player2[10];
char temp[10];

//for storing sign of the player
char currentplayersign = 'X';

//flag varaibles used for turn between the players
int  valid_cell = 0;
int valid_input = 0;


// function for initailize tic tac toe board 
void initializeBoard()
{
	// initailly board is empty, so we need fill the space into 2D array 
	for(int row = 0; row < SIZE; row++)
	{
		for(int col = 0; col < SIZE; col++)
		{
			board[row][col] = ' ';
		}
	}

}

// function for printing Tic tac toe board 
void printBoard()
{
	//print new line(\n) and tab space(\t)
   printf("\n\n\t ");

   //print updated board using board 2D array
   for(int row = 0; row < SIZE; row++)
   {
	   for(int col = 0; col < SIZE; col++)
	   {
		   printf("%c", board[row][col]);
		   if(col < 2)
		   {
			   printf("  |  ");
		   }
	   }
	   if(row < 2)
		   printf("\n\t---------------\n\t ");
   }

   //printing required new lines
   printf("\n\n\n");
}

// function handle players move input and updtae the borad 
void playerMove()
{
	//prompt message for players
	printf("%s,Please Enter row (0-2) and column (0-2) separted by space: ", player1);

	//we need row and column indexs for storing user signs/input into board array
	//read row and columns from players
	int row, col;
	scanf("%d %d", &row, &col);

	//check whether user entered correct row and columsn indexs
	//if no print suggestion message for user
	//valid_input = 0 means in this time do not turn player
	if(row < 0 || row > SIZE-1 || col < 0 || col > SIZE-1)
	{
		printf("Invalid input! Please enter row and column between 0 and 2.\n");
		valid_input = 0;
        return;
	}

	//check whether player give input on empty box or not
	//if not then print suggestion message for player 
	//in this case give one more chance give to current user for entering sign/input in correct cell
	//so we need valid_cell variable to check it
	if(board[row][col] != ' ')
	{
		printf("That cell is already occupied! Try again.\n");
		valid_cell = 0;
        return;
	}

	//if player entered correct cell and correct row and col then sign/input will update in board
	board[row][col] = currentplayersign;
	//these two variables used to turn players
	valid_input = 1;
	valid_cell = 1;


}

//function used for Switch turns between the players 
void switchPlayer()
{
	//based on these two variables turn the players and respective signs 
	if(valid_input && valid_cell)
	{
		//currenplayersign upadted respective sign of the player
		currentplayersign = currentplayersign == 'X' ? 'O' : 'X';

		//string copy function user to turn the players
		strcpy(temp,player1);
		strcpy(player1,player2);
		strcpy(player2,temp);
	}

}

//function for check which player win the Game
int checkWin()
{
	int i;
	//check rows and columns
	//if row or column match then return WIN(macro) to main function
   for (i = 0; i < 3; i++) {
        if ((board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') || 
            (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')) {
            return WIN; 
        }
    }

   //check diagonals 
   //diagonals match then return WIN(macro) to main function
   if ((board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') || 
        (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')) {
        return WIN; 
    }


    //if not match
    return NOT_WIN;


}

// function for check Draw the game
int checkDraw()
{
	//Draw --> means if cell/box not empty
	//Cell/box is empty means not draw
	int row , col ;
	for( row = 0 ; row < SIZE; row++)
	{

		for( col = 0 ; col < SIZE; col++)
		{
			if(board[row][col] == ' ')
			{
				return NOT_DRAW; // MACRO
				

			}
		}
	}

	return DRAW; // MACRO
}

//read the players names
void read_players_name()
{
	printf("Enter Player1 name : ");
	scanf("%s", player1);
	printf("Enetr Player2 name : ");
	scanf("%s", player2);
	printf("\n");

}

