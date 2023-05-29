#include <iostream>
#include <vector>
#include "ttt.hpp"
using namespace std;



int main (int argc, char* argv[]) {

  cout << "Tic-Tac-Toe" << endl;
  cout << "Here are the rules:\n" << endl;
  cout << "\t-Decide amongst yourselves who will be player one\n and who will be player two" << endl;
  cout << "\t-Player 1 will go first and input their desired move based on the numbering system below:\n" << endl;
  cout << "     |     |     " << endl;
  cout << "  1  |  2  |  3  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  4  |  5  |  6  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  7  |  8  |  9  " << endl;
  cout << "     |     |     \n" << endl;
  cout << "\t-This is done to select the space to place an \"X\"" << endl;
  cout << "\t-Player 2 will follow for \"O\" and the cycle will continue until someone wins" << endl;
  cout << "\t-The first to get three in a row wins\n\n\n\n";


/*Some considerations for the future version that displays the X's and O's in the console:
  Store the grid as a series of char arrays
  Pop an array's coordinate at the numbered space with an X or O
  Alternatively, we could learn file input, write the grid to that, then ensure that only the first
  character is popped into place and we can discard all other input very easily and keep the junk
  extra characters out. Keep the stream clear and all.
Other future iteration considerations:
  Provide a check that makes sure no input has already been placed into a square. Thinking short if-else
  trees but this may be bad taste*/


start:
  short board[9];
  short game = 0;
  short turns = 0;


  while (turns < 10) {

  loop1:
    char choice1;

    cout << "Player 1, input your choice:";
    cin >> choice1;

    switch (choice1) {
      case '1':
        if (board[0] == 0) {board[0] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '2':
        if (board[1] == 0) {board[1] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '3':
        if (board[2] == 0) {board[2] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '4':
        if (board[3] == 0) {board[3] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '5':
        if (board[4] == 0) {board[4] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '6':
        if (board[5] == 0) {board[5] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '7':
        if (board[6] == 0) {board[6] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '8':
        if (board[7] == 0) {board[7] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      case '9':
        if (board[8] == 0) {board[8] = 1; break;}
        else {cout << "This space is taken." << endl; goto loop1; break;}
      default:
        cout << "Please provide valid input";
        goto loop1;
    }

    game = checkGameOverP1(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);
    turns++;

  loop2:
    char choice2;

    cout << "Player 2, input your choice:";
    cin >> choice2;

     switch (choice2) {
      case '1':
        if (board[0] == 0) {board[0] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '2':
        if (board[1] == 0) {board[1] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '3':
        if (board[2] == 0) {board[2] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '4':
        if (board[3] == 0) {board[3] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '5':
        if (board[4] == 0) {board[4] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '6':
        if (board[5] == 0) {board[5] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '7':
        if (board[6] == 0) {board[6] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '8':
        if (board[7] == 0) {board[7] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      case '9':
        if (board[8] == 0) {board[8] = -1; break;}
        else {cout << "This space is taken." << endl; goto loop2; break;}
      default:
        cout << "Please provide valid input";
        goto loop2;
    } 

    game = checkGameOverP2(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);
    turns++;
  }

  if (game == 1) {
    cout << "Okay, that's enough, player 1 wins!" << endl;
  } else if (game == -1) {
    cout << "Okay, that's enough, player 2 wins!" << endl;
  } else if (game == 0) {
    cout << "Looks like it's a tie!" << endl;
  }


}
