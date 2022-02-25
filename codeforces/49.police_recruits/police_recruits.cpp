#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n;
  signed short int event;
  unsigned int num_police = 0, num_crimes = 0;
  cin >> n;
  for (unsigned int i = 1; i <= n; i++) {
    cin >> event;
    if (event == -1) {
      if (num_police > 0) {
        num_police -= 1;
      }
      else {
        num_crimes += 1;
      }
    }
    else {
      num_police += event;
    }
  }
  cout << num_crimes << endl;
  return 0;
}