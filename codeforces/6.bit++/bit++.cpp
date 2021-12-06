#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  cin >> n;
  if (n >= 1 && n <= 150) {
    int x = 0;
    string statement;
    while (n--) {
      cin >> statement;
      if (statement[1] == '+') {
        x++;
      }
      else if (statement[1] == '-') {
        x--;
      }
      else {
        continue;
      }
    }
    cout << x << endl;
  }
  return 0;
}