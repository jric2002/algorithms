#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n;
  short int xi, yi, zi;
  short int xr, yr, zr;
  cin >> n;
  xr = yr = zr = 0;
  while (n--) {
    cin >> xi >> yi >> zi;
    xr += xi;
    yr += yi;
    zr += zi;
  }
  if (xr == 0 && yr == 0 && zr == 0) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}