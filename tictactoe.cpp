#include <iostream>
#include <vector>
#include "ttt.hpp"
using namespace std;



int main (int argc, char* argv[]) {

printRules();

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
        if (board[0] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[0] == 0) {board[0] = 1;}
        break;
      case '2':
        if (board[1] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[1] == 0) {board[1] = 1;}
        break;
      case '3':
        if (board[2] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[2] == 0) {board[2] = 1;}
        break;
      case '4':
        if (board[3] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[3] == 0) {board[3] = 1;}
        break;
      case '5':
        if (board[4] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[4] == 0) {board[4] = 1;}
        break;
      case '6':
        if (board[5] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[5] == 0) {board[5] = 1;}
        break;
      case '7':
        if (board[6] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[6] == 0) {board[6] = 1;}
        break;
      case '8':
        if (board[7] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[7] == 0) {board[7] = 1;}
        break;
      case '9':
        if (board[8] != 0) {cout << "This space is taken." << endl; goto loop1;}
        if (board[8] == 0) {board[8] = 1;}
        break;
      default:
        cout << "Please provide valid input";
        goto loop1;
    }

    printCurrentBoard(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);
    game = checkGameOverP1(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);
    turns++;
      
  loop2:
    char choice2;

    cout << "Player 2, input your choice:";
    cin >> choice2;

     switch (choice2) {
      case '1':
        if (board[0] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[0] == 0) {board[0] = -1;}
        break;
      case '2':
        if (board[1] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[1] == 0) {board[1] = -1;}
        break;
      case '3':
        if (board[2] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[2] == 0) {board[2] = -1;}
        break;
      case '4':
        if (board[3] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[3] == 0) {board[3] = -1;}
        break;
      case '5':
        if (board[4] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[4] == 0) {board[4] = -1;}
        break;
      case '6':
        if (board[5] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[5] == 0) {board[5] = -1;}
        break;
      case '7':
        if (board[6] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[6] == 0) {board[6] = -1;}
        break;
      case '8':
        if (board[7] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[7] == 0) {board[7] = -1;}
        break;
      case '9':
                    if (board[8] != 0) {cout << "This space is taken." << endl; goto loop2;}
        if (board[8] == 0) {board[8] = -1;}
        break;
      default:
        cout << "Please provide valid input";
        goto loop2;
    } 
    printCurrentBoard(board[0], board[1], board[2], board[3], board[4], board[5], board[6], board[7], board[8]);
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
