#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, a, b, major, minor;
  unsigned int min_area;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a > b) {
      major = a;
      minor = b;
    }
    else {
      major = b;
      minor = a;
    }
    if ((major / 2) >= minor) {
      min_area = pow(major, 2);
    }
    else {
      min_area = pow(minor * 2, 2);
    }
    cout << min_area << endl;
  }
  return 0;
}