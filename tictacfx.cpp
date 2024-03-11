#include <iostream>
#include <vector>
using std::cout;


short checkGameOverP1(int* result) {

  //I think this is probably a stupid way to do this
  //Don't know any improvements rn tho...
  if (result[0] + result[1] + result[2] == 3 ||
      result[0] + result[3] + result[6] == 3 ||
      result[0] + result[4] + result[8] == 3 ||
      result[3] + result[4] + result[5] == 3 ||
      result[6] + result[7] + result[8] == 3 ||
      result[1] + result[4] + result[7] == 3 ||
      result[1] + result[5] + result[8] == 3 ||
      result[2] + result[4] + result[6] == 3) {
    return 1;
  } else {
    return 0;
  }
}



short checkGameOverP2(int* result) {

  if (result[0] + result[1] + result[2] == -3 ||
      result[0] + result[3] + result[6] == -3 ||
      result[0] + result[4] + result[8] == -3 ||
      result[3] + result[4] + result[5] == -3 ||
      result[6] + result[7] + result[8] == -3 ||
      result[1] + result[4] + result[7] == -3 ||
      result[1] + result[5] + result[8] == -3 || 
      result[2] + result[4] + result[6] == -3) {
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
  cout << "\t-The first to get three in a row wins\n";
  cout << "Input \"R\" at any time to view the rules and board again" << "\n";
  cout << "Input \"Q\" at any time to quit the game" << "\n\n\n\n";
}

void printCurrentBoard(int* result) {

  char space[9] {}; 

  for(int i = 0; i < 9; i++) {
    switch(result[i]) {
      case 1:
        space[i] = 'X';
        break;
      case -1:
        space[i] = 'O';
        break;
      default:
        space[i] = '_';
      #ifdef DEBUG
      cout << result[i] << "\n\n" << space[i] << "\n" << std::endl;
      #endif

    }

  } 

  cout << "     |     |     " << "\n";
  cout << "  " << space[0] << "  |  " << space[1] << "  |  " << space[2] << "  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  " << space[3] << "  |  " << space[4] << "  |  " << space[5] << "  " << "\n";
  cout << "_____|_____|_____" << "\n";
  cout << "     |     |     " << "\n";
  cout << "  " << space[6] << "  |  " << space[7] << "  |  " << space[8] << "  " << "\n";
  cout << "     |     |     \n" << std::endl;


}