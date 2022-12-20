#include <iostream>
#include <vector>
#include "ttt.hpp"
using namespace std;



int main (int argc, char* argv[]) {

  cout << "Tic-Tac-Toe" << endl;
  cout << "Here are the rules:\n" << endl;
  cout << "\t-Decide amongst yourselves who will be player one\n and who will be player two" << endl;
  cout << "\t-Player 1 will go first and input either a 2 dimensional coordinate into the console" << endl;
  cout << "\t-This will be done in the format \"x,x\"" << endl;
  cout << "\t-This is done to select the coordinates of the space to place and \"X\"" << endl;
  cout << "\t-Player 2 will follow for \"O\" and the cycle will continue until someone wins" << endl;
  cout << "\t-The first to get three in a row wins\n\n\n\n";

 /*As far as this version is concerned, there needs to be some serious refactoring.
 Here are some considerations:
  1. We write the board out in the rules using the ascii art we found online
  2. We just make the grid a single dimensional array (0-8) that corresponds to the
     above ascii idea
  I think that makes the most sense in that area, that way we can accpet user input
  in a controlled and easy fashion. They just have to type in a number then we can
  switch it. Simple as and saves the headache of refactoring all of this with if-else
  statements, which is the other alternative and would be simple but perhaps tedious.
  I'll sleep on it tbh*/

start:
  int board[9];
  int game = 0;

/*
  board[0][0] = 1;
  board[0][1] = 1;
  board[0][2] = 0;
*/

//Seeing what the result of bool math is
//  int result = board[0][0] + board[0][1] + board[0][2];

// cout << result;
//result is 2 as expected


  while (game == 0) {

  loop1:
    char choice1;

    cout << "Player 1, input your choice:";
    cin >> choice1;

    switch (choice1) {
      case '1':
        board[0] = 1;
        break;
      case '2':
        board[1] = 1;
        break;
      case '3':
        board[2] = 1;
        break;
      case '4':
        board[3] = 1;
        break;
      case '5':
        board[4] = 1;
        break;
      case '6':
        board[5] = 1;
        break;
      case '7':
        board[6] = 1;
        break;
      case '8':
        board[7] = 1;
        break;
      case '9':
        board[8] = 1;
        break;
      default:
        cout << "Please provide valid input";
        goto loop1;
    }

    game = checkGameOverP1(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);


  loop2:
    char choice2;

    cout << "Player 2, input your choice:";
    cin >> choice2;

    switch (choice2) {
      case '1':
        board[0] = -1;
        break;
      case '2':
        board[1] = -1;
        break;
      case '3':
        board[2] = -1;
        break;
      case '4':
        board[3] = -1;
        break;
      case '5':
        board[4] = -1;
        break;
      case '6':
        board[5] = -1;
        break;
      case '7':
        board[6] = -1;
        break;
      case '8':
        board[7] = -1;
        break;
      case '9':
        board[8] = -1;
        break;
      default:
        cout << "Please provide valid input";
        goto loop2;
    }

    game = checkGameOverP2(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);

  }

  if (game == 1) {
    cout << "Okay, that's enough, player 1 wins!" << endl;
  } else if (game == -1) {
    cout << "Okay, that's enough, player 2 wins!" << endl;
  }


}
