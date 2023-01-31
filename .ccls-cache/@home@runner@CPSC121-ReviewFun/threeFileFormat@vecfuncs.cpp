#include "vecfuncs.h"

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
    }
    if (vector.at(i) < min) {
      min = vector.at(i);
    }
  }

}