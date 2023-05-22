#include <iostream>
#include <vector>
using namespace std;


int checkGameOverP1(int result1, int result2, int result3, int result4, int result5, int result6, int result7, int result8, int result9) {

  if (result1 + result2 + result3 == 3 || result1 + result4 + result7 == 3 || result1 + result5 + result9 == 3 || result4 + result5 + result6 == 3 || result7 + result8 + result9 == 3 || result2 + result5 + result8 == 3 || result2 + result6 + result9 == 3 || result3 + result5 + result7 == 3) {
    return 1;
  } else {
    return 0;
  }
}



int checkGameOverP2(int result1, int result2, int result3, int result4, int result5, int result6, int result7, int result8, int result9) {

  if (result1 + result2 + result3 == -3 || result1 + result4 + result7 == -3 || result1 + result5 + result9 == -3 || result4 + result5 + result6 == -3 || result7 + result8 + result9 == -3 || result2 + result5 + result8 == -3 || result2 + result6 + result9 == -3 || result3 + result5 + result7 == -3) {
    return -1;
  } else {
    return 0;
  }
}
