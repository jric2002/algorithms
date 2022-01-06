#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, px, py;
  bool status = true;
  cin >> n;
  cin >> px;
  unsigned short int *x_levels = new unsigned short int[px];
  for (unsigned short int i = 0; i < px; i++) {
    cin >> x_levels[i];
  }
  cin >> py;
  unsigned short int *y_levels = new unsigned short int[py];
  for (unsigned short int i = 0; i < py; i++) {
    cin >> y_levels[i];
  }
  unsigned short int i = 1;
  unsigned short int counter = 0;
  while (i <= n && status) {
    status = false;
    for (unsigned short int j = 0; j < px; j++) {
      if (x_levels[j] == i) {
        status = true;
        counter++;
        break;
      }
    }
    for (unsigned short int j = 0; j < py && !status; j++) {
      if (y_levels[j] == i) {
        status = true;
        counter++;
        break;
      }
    }
    i++;
  }
  if (n == counter) {
    cout << "I become the guy." << endl;
  }
  else {
    cout << "Oh, my keyboard!" << endl;
  }
  delete[] x_levels;
  delete[] y_levels;
  return 0;
}