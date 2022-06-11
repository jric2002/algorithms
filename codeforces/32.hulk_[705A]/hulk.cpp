#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  string hate = "I hate";
  string love = "I love";
  string feeling = hate;
  cin >> n;
  if (n > 1) {
    for (unsigned short int i = 2; i <= n; i++) {
      feeling += " that ";
      if ((i % 2) != 0) {
        feeling += hate;
      }
      else {
        feeling += love;
      }
    }
  }
  feeling += " it";
  cout << feeling << endl;
  return 0;
}