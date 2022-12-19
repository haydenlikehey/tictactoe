#include <iostream>
#include <vector>
using namespace std;


int checkGameOverP1(int result1, int result2, int result3, int result4, int result5, int result6, int result7, int result8, int result9) {

  int check1 = result1 + result2 + result3;
  int check2 = result1 + result4 + result7;
  int check3 = result1 + result5 + result9;
  int check4 = result4 + result5 + result6;
  int check5 = result7 + result8 + result9;
  int check6 = result2 + result5 + result8;
  int check7 = result3 + result6 + result9;
  int check8 = result3 + result5 + result7;

  if (check1 == 3 || check2 == 3 || check3 == 3 || check4 == 3 || check5 == 3 || check6 == 3 || check7 == 3 || check8 ==3) {
    return 1;
  } else {
    return 0;
  }
}

//small note to test git on linux

int checkGameOverP2(int result1, int result2, int result3, int result4, int result5, int result6, int result7, int result8, int result9) {

  int check1 = result1 + result2 + result3;
  int check2 = result1 + result4 + result7;
  int check3 = result1 + result5 + result9;
  int check4 = result4 + result5 + result6;
  int check5 = result7 + result8 + result9;
  int check6 = result2 + result5 + result8;
  int check7 = result3 + result6 + result9;
  int check8 = result3 + result5 + result7;

  if (check1 == -3 || check2 == -3 || check3 == -3 || check4 == -3 || check5 == -3 || check6 == -3 || check7 == -3 || check8 ==-3) {
    return -1;
  } else {
    return 0;
  }
}
