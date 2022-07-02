#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p, q, available_rooms = 0;
  cin >> n;
  while (n--) {
    cin >> p >> q;
    if ((q - p) >= 2) {
      available_rooms++;
    }
  }
  cout << available_rooms << endl;
  return 0;
}