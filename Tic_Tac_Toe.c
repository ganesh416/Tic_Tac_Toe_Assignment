/*
Name: Ganesh pyndla
Date: 13-06-2024
Description: Implement the Tic Tac Toe games using C
*/

#include "tic_tac_toe.h"

extern char currentplayersign;
extern char player1[10];

int main()
{

    //print prompt message for players
	printf("-------- Welcome To Tic Tac Toe -------------\n\n\t");

    //call the function for initialize the board
	initializeBoard();

	// call the function for printBoard
	printBoard();

	//Give the instructions to players
    printf("\t   Instructions \n");
    printf("\tPlayer 1 sign is = X\n");
    printf("\tPlayer 2 sign is = O\n\n");

    //call the function for read the players names
	read_players_name();

    // ch variable for selecting choice for conitinue game or exit from the game
	char ch;

	/*super loop*/
	while(1)
	{
		//call the function for taking input from players
		playerMove();
		
		//call the function for printing updated board
		printBoard();

		//call the function check whether player win the games or not
		if(checkWin() == WIN)
		{
			printf("-----------------------------------\n");
			//call  the  function for print board
			printBoard();
			//print the player name, gretting message for players
			printf("  -----> %s Win The Game! <-----\n", player1);
			printf("-----------------------------------\n\n");
			

		}
		//call the function check whether players draw the games or not
		else if(checkDraw() == DRAW)
		{
			
			printf("-----------------------------------\n");
			//call the function for printing board
			printBoard();
			//print user promt message
			printf("  ---> Game is Draw! <---\n\n");	
			printf("-----------------------------------\n\n");

		}


        // if players want to playe the game again 
		if((checkWin() == WIN )|| (checkDraw() == DRAW))
		{
			
			//fpurge for clearing input buffer
			__fpurge(stdin);

			//prompt message for players
			//read user choice
			printf("Do you want play it again ? press [Y/y] to conitinue:  ");
			scanf("%c", &ch);

			//based the players choice Games conitinue or exit
		    //if condition is true
			if(ch == 'y' || ch == 'Y')
			{
                //call the function for initialize the board again
				initializeBoard();
				//call function for print the board
				printBoard();
				//call function for read the players names
				read_players_name();
				//update player1 sign('X')
				currentplayersign  = 'X';
				continue;
			}
			//if players exit game press any key except y/Y
			//break used to break the while loop
			else
				break;

		}
		else
			//calling function for swicth/turn players 
			switchPlayer();
	}

	return 0;
}
