#include <iostream>
#include <cstring>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned int n;
  unsigned int number_groups = 1;
  string magnet;
  char last_pole = ' ';
  cin >> n;
  while (n--) {
    cin >> magnet;
    if (last_pole == magnet[0]) {
      number_groups++;
    }
    last_pole = magnet[1];
  }
  cout << number_groups << endl;
  return 0;
}