#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, h, a, min_width = 0;
  cin >> n >> h;
  while (n--) {
    cin >> a;
    if (a >= 1 && a <= (2 * h)) {
      if (a <= h) {
        min_width++;
      }
      else {
        min_width += 2;
      }
    }
  }
  cout << min_width << endl;
  return 0;
}