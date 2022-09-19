#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  char c;
  string heart[] = {
    "   FFFFFF      FFFFF",
    "  FFFFFFFF    FFFFFFF",
    " FFFFFFFFFF  FFFFFFFFF",
    "FFFFFFFFFFFFFFFFFFFFFFF",
    "FFFFFFFFFFFFFFFFFFFFFFF",
    " FFFFFFFFFFFFFFFFFFFFF",
    "  FFFFFFFFFFFFFFFFFFF",
    "   FFFFFFFFFFFFFFFFF",
    "    FFFFFFFFFFFFFFF",
    "     FFFFFFFFFFFFF",
    "      FFFFFFFFFFF",
    "       FFFFFFFFF",
    "        FFFFFFF",
    "         FFFFF",
    "          FFF",
    "           F"};
  int size_h = sizeof(heart)/sizeof(string);
  cin >> c;
  for (int i = 0; i < size_h; i++) {
    for (char ch : heart[i]) {
      if (ch != ' ') {
        cout << c;
      }
      else {
        cout << ch;
      }
    }
    cout << endl;
  }
  return 0;
}
/* Definition */