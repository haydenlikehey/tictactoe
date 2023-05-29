#include <iostream>
using namespace std;


short checkGameOverP1(short result1, short result2, short result3, short result4, short result5, short result6, short result7, short result8, short result9) {

  if (result1 + result2 + result3 == 3 || result1 + result4 + result7 == 3 || result1 + result5 + result9 == 3 || result4 + result5 + result6 == 3 || result7 + result8 + result9 == 3 || result2 + result5 + result8 == 3 || result2 + result6 + result9 == 3 || result3 + result5 + result7 == 3) {
    return 1;
  } else {
    return 0;
  }
}



short checkGameOverP2(short result1, short result2, short result3, short result4, short result5, short result6, short result7, short result8, short result9) {

  if (result1 + result2 + result3 == -3 || result1 + result4 + result7 == -3 || result1 + result5 + result9 == -3 || result4 + result5 + result6 == -3 || result7 + result8 + result9 == -3 || result2 + result5 + result8 == -3 || result2 + result6 + result9 == -3 || result3 + result5 + result7 == -3) {
    return -1;
  } else {
    return 0;
  }
}

void printRules(void) {
  cout << "Tic-Tac-Toe" << endl;
  cout << "Here are the rules:\n" << endl;
  cout << "\t-Decide amongst yourselves who will be player one\n\tand who will be player two" << endl;
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
}

void printCurrentBoard(short result1, short result2, short result3, short result4, short result5, short result6, short result7, short result8, short result9) {

  char space1; 
  char space2;
  char space3;
  char space4;
  char space5;
  char space6;
  char space7;
  char space8;
  char space9; 

  if (result1 == 0) {space1 = '_';} else if (result1 == 1) {space1 = 'X';} else {space1 = 'O';}
  if (result2 == 0) {space2 = '_';} else if (result2 == 1) {space2 = 'X';} else {space2 = 'O';}
  if (result3 == 0) {space3 = '_';} else if (result3 == 1) {space3 = 'X';} else {space3 = 'O';}
  if (result4 == 0) {space4 = '_';} else if (result4 == 1) {space4 = 'X';} else {space4 = 'O';}
  if (result5 == 0) {space5 = '_';} else if (result5 == 1) {space5 = 'X';} else {space5 = 'O';}
  if (result6 == 0) {space6 = '_';} else if (result6 == 1) {space6 = 'X';} else {space6 = 'O';}
  if (result7 == 0) {space7 = '_';} else if (result7 == 1) {space7 = 'X';} else {space7 = 'O';}
  if (result8 == 0) {space8 = '_';} else if (result8 == 1) {space8 = 'X';} else {space8 = 'O';}
  if (result9 == 0) {space9 = '_';} else if (result9 == 1) {space9 = 'X';} else {space9 = 'O';}

  

  cout << "     |     |     " << endl;
  cout << "  " << space1 << "  |  " << space2 << "  |  " << space3 << "  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << space4 << "  |  " << space5 << "  |  " << space6 << "  " << endl;
  cout << "_____|_____|_____" << endl;
  cout << "     |     |     " << endl;
  cout << "  " << space7 << "  |  " << space8 << "  |  " << space9 << "  " << endl;
  cout << "     |     |     \n" << endl;


}