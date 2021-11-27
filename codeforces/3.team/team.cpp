#include <iostream>

using namespace std;

int main() {
  unsigned short int n;
  unsigned short int probability;
  unsigned short int solutions = 0;
  cin >> n;
  if (n >= 1 && n <= 1000) {
    bool opinions[n][3];
    for (unsigned short int r = 0; r < n; r++) {
      for (unsigned short int c = 0; c < 3; c++) {
        cin >> opinions[r][c];
      }
    }
    for (unsigned short int r = 0; r < n; r++) {
      probability = opinions[r][0] + opinions[r][1] + opinions[r][2];
      if (probability >= 2) {
        solutions++;
      }
    }
    cout << solutions << endl;
  }
  return 0;
}