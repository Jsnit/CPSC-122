#include "vecfuncs.h"

int main() {
  vector<int> userNums;
  loadVec(userNums);
  cout << "Vector size is " << userNums.size() << endl;
  //define and call a func to find and return the min and max number in the vec
  int min;
  int max;
  vecMinMax(userNums, min, max);
  // change this to 3 file format
  cout << "Min = " << min << " | Max = " << max << endl;
}
