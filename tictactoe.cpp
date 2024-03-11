#include "ttt.hpp"


int main (int argc, char* argv[]) {

  printRules();

  int vboard[9] {};
  short game = 0;
  short turns = 0;


  while (turns < 9) {

  loop1:
    char choice1;

    cout << "Player 1, input your choice:";
    cin >> setw(1) >> choice1;

    switch (choice1) {
      case '1':
        if (vboard[0] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[0] == 0) {vboard[0] = 1;}
        break;
      case '2':
        if (vboard[1] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[1] == 0) {vboard[1] = 1;}
        break;
      case '3':
        if (vboard[2] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[2] == 0) {vboard[2] = 1;}
        break;
      case '4':
        if (vboard[3] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[3] == 0) {vboard[3] = 1;}
        break;
      case '5':
        if (vboard[4] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[4] == 0) {vboard[4] = 1;}
        break;
      case '6':
        if (vboard[5] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[5] == 0) {vboard[5] = 1;}
        break;
      case '7':
        if (vboard[6] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[6] == 0) {vboard[6] = 1;}
        break;
      case '8':
        if (vboard[7] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[7] == 0) {vboard[7] = 1;}
        break;
      case '9':
        if (vboard[8] != 0) {cout << "This space is taken." << "\n"; goto loop1;}
        if (vboard[8] == 0) {vboard[8] = 1;}
        break;
      case 'r':
        printRules();
        goto loop1;
        break;
      case 'R':
        printRules();
        goto loop1;
        break;
      case 'q':
        return 0;
        break;
      case 'Q':
        return 0;
        break;
      default:
        cout << "Please provide valid input";
        goto loop1;
    }

    printCurrentBoard(vboard);
    game = checkGameOverP1(vboard);
    turns++;
    if (turns == 9) {continue;} //Last move victory failsafe
    if (game != 0) {break;} //Win condition breakout
      
  loop2:
    char choice2;

    cout << "Player 2, input your choice:";
    cin >> setw(1) >> choice2;

    switch (choice2) {
      case '1':
        if (vboard[0] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[0] == 0) {vboard[0] = -1;}
        break;
      case '2':
        if (vboard[1] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[1] == 0) {vboard[1] = -1;}
        break;
      case '3':
        if (vboard[2] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[2] == 0) {vboard[2] = -1;}
        break;
      case '4':
        if (vboard[3] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[3] == 0) {vboard[3] = -1;}
        break;
      case '5':
        if (vboard[4] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[4] == 0) {vboard[4] = -1;}
        break;
      case '6':
        if (vboard[5] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[5] == 0) {vboard[5] = -1;}
        break;
      case '7':
        if (vboard[6] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[6] == 0) {vboard[6] = -1;}
        break;
      case '8':
        if (vboard[7] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[7] == 0) {vboard[7] = -1;}
        break;
      case '9':
        if (vboard[8] != 0) {cout << "This space is taken." << "\n"; goto loop2;}
        if (vboard[8] == 0) {vboard[8] = -1;}
        break;
      case 'r':
        printRules();
        goto loop1;
        break;
      case 'R':
        printRules();
        goto loop1;
        break;
      case 'q':
        return 0;
        break;
      case 'Q':
        return 0;
        break;
      default:
        cout << "Please provide valid input";
        goto loop2;
    } 
    printCurrentBoard(vboard);
    game = checkGameOverP2(vboard);
    turns++;
    if (game != 0) {break;}
  }

  if (game == 1) {
    cout << "Okay, that's enough, player 1 wins!" << "\n";
  } else if (game == -1) {
    cout << "Okay, that's enough, player 2 wins!" << "\n";
  } else if (game == 0) {
    cout << "Looks like it's a tie!" << "\n";
  }


}
