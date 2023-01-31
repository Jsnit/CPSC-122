#include "vecfuncs.h"

void loadVec(vector<int>&);
void vecMinMax(vector<int>&, int&, int&);

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

void loadVec(vector<int>& vector) {
  int userInput;
  for (int i = 0; i < 5; i++) {
    cout << "Enter a num :";
    cin >> userInput;
    vector.push_back(userInput);
  }
}

void vecMinMax(vector<int>& vector, int& min, int& max) {
  for (int i = 0; i < vector.size(); i++) {
    if (vector.at(i) > max) {
      max = vector.at(i);
    } else if (vector.at(i) < min) {
      min = vector.at(i);
    }
  }

}