#include <iostream>
#include <vector>
using std::cout, std::vector;


short checkGameOverP1(vector<int> result) {

  //I think this is probably a stupid way to do this
  //Don't know any improvements rn tho...
  if (result[0] + result[1] + result[2] == 3 || result[0] + result[3] + result[6] == 3 || result[0] + result[4] + result[8] == 3 || result[3] + result[4] + result[5] == 3 || result[6] + result[7] + result[8] == 3 || result[1] + result[4] + result[7] == 3 || result[1] + result[5] + result[8] == 3 || result[2] + result[4] + result[6] == 3) {
    return 1;
  } else {
    return 0;
  }
}



short checkGameOverP2(vector<int> result) {

  if (result[0] + result[1] + result[2] == -3 || result[0] + result[3] + result[6] == -3 || result[0] + result[4] + result[8] == -3 || result[3] + result[4] + result[5] == -3 || result[6] + result[7] + result[8] == -3 || result[1] + result[4] + result[7] == -3 || result[1] + result[5] + result[8] == -3 || result[2] + result[4] + result[6] == -3) {
    return -1;
  } else {
    return 0;
  }
}

void printRules(void) {
  cout << "Tic-Tac-Toe" << "\n";
  cout << "Here are the rules:\n" << "\n";
  cout << "\t-Decide amongst yourselves who will be player one\n\tand who will be player two" << "\n";
  cout << "\t-Player 1 will go first and input their desired move based on the numbering system below:\n" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  1  |  2  |  3  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  4  |  5  |  6  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  7  |  8  |  9  " << "\n";
  cout << "     |     |     \n" << "\n";
  cout << "\t-This is done to select the space to place an \"X\"" << "\n";
  cout << "\t-Player 2 will follow for \"O\" and the cycle will continue until someone wins" << "\n";
  cout << "Input \"R\" at any time to view the rules and board again" << "\n";
  cout << "\t-The first to get three in a row wins\n\n\n\n";
}

void printCurrentBoard(vector<int> result) {

  char space1, space2, space3, space4, space5, space6, space7, space8, space9; 

  //Did all this bullshit to try to formulate a switch for this just to fuck it up!
  if (result[0] == 0) {space1 = '_';} else if (result[0] == 1) {space1 = 'X';} else {space1 = 'O';}
  if (result[1] == 0) {space2 = '_';} else if (result[1] == 1) {space2 = 'X';} else {space2 = 'O';}
  if (result[2] == 0) {space3 = '_';} else if (result[2] == 1) {space3 = 'X';} else {space3 = 'O';}
  if (result[3] == 0) {space4 = '_';} else if (result[3] == 1) {space4 = 'X';} else {space4 = 'O';}
  if (result[4] == 0) {space5 = '_';} else if (result[4] == 1) {space5 = 'X';} else {space5 = 'O';}
  if (result[5] == 0) {space6 = '_';} else if (result[5] == 1) {space6 = 'X';} else {space6 = 'O';}
  if (result[6] == 0) {space7 = '_';} else if (result[6] == 1) {space7 = 'X';} else {space7 = 'O';}
  if (result[7] == 0) {space8 = '_';} else if (result[7] == 1) {space8 = 'X';} else {space8 = 'O';}
  if (result[8] == 0) {space9 = '_';} else if (result[8] == 1) {space9 = 'X';} else {space9 = 'O';}

  

  cout << "     |     |     " << "\n";
  cout << "  " << space1 << "  |  " << space2 << "  |  " << space3 << "  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  " << space4 << "  |  " << space5 << "  |  " << space6 << "  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  " << space7 << "  |  " << space8 << "  |  " << space9 << "  " << "\n";
  cout << "     |     |     \n" << "\n";


}