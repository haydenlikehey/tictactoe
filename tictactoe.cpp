#include <iostream>
#include <vector>
using namespace std;



int main (int argc, char* argv[]) {

  cout << "Tic-Tac-Toe" << endl;
  cout << "Here are the rules:\n" << endl;
  cout << "\t-Decide amongst yourselves who will be player one\n and who will be player two" << endl;
  cout << "\t-Player 1 will go first and input either a 2 dimensional coordinate into the console" << endl;
  cout << "\t-This is done to select the coordinates of the space to place and \"X\"";
  cout << "\t-Player 2 will follow for \"O\" and the cycle will continue until someone wins";
  cout << "\t-The first to get three in a row wins\n\n\n\n";

 /*Okay, here's the plan
 -Establish an array or vector for the field
 -Have them tied to a coordinate plane
 -Make sure input is off by one bc that's how vectors work
 -Maybe include some ascii art but probably not becuase that's not my forté
 -Create a loop that esablishes gameplay
    I'm thinking player1 turn (cin coordinates as ints handled with switch), win check function,
    followed by same for player two, resetting variables with initiation

    About that win check function, I think I can do some fancy maths to see if a
    player has one rather than creating the 8 win conditions
    This just made me think of considering to use bitfields. If I can, I will

    Not much planned after that. Getting the whole github bullshit figured out tuckered me out*/

start:
  int board[3][3];
  bool game = 1;

/*
  board[0][0] = 1;
  board[0][1] = 1;
  board[0][2] = 0;
*/

//Seeing what the result of bool math is
//  int result = board[0][0] + board[0][1] + board[0][2];

// cout << result;
//result is 2 as expected


  while (game == 1) {

  loop1:
    string choice1;
    string choice2;

    cout << "Player 1, input your choice:";
    cin >> choice1 >> choice2;

    switch (choice1 + "," + choice2) {
      case "1,1":
        board[0][0] = 1;
        break;
      case "1,2":
        board[0][1] = 1;
        break;
      case "1,3":
        board[0][2] = 1;
        break;
      case "2,1":
        board[1][0] = 1;
        break;
      case "2,2":
        board[1][1] = 1;
        break;
      case "2,3":
        board[1][2] = 1;
        break;
      case "3,1":
        board[2][0] = 1;
        break;
      case "3,2":
        board[2][1] = 1;
        break;
      case "3,3":
        board[2][2] = 1;
        break;
      default:
        cout << "Please provide valid input";
        goto loop1;

    }


  }


}
