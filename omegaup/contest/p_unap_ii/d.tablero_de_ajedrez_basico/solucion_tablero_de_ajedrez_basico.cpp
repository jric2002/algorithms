#include <iostream>
using namespace std;
int main() {
  int i, j, n;
  cin >> n;
  for (i = 0; i < 8*n; i++) {
    for (j = 0; j < 8*n; j++) {
      if ((i/n + j/n) % 2 == 0) {
        cout  << "X";
      }
      else {
        cout << "0";
      }
    }
    cout << endl;
  }
  return 0;
}