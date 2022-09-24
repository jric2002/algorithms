#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  cin >> s;
  for (int i = 0, ini = 0, fin; i < s.length(); i++) {
    if (s.at(i) == ',' || i == (s.length() - 1)) {
      if (i == (s.length() - 1)) {
        fin = i;
        while (fin >= ini) {
          cout << s.at(fin);
          fin--;
        }
      }
      else {
        fin = i - 1;
        while (fin >= ini) {
          cout << s.at(fin);
          fin--;
        }
        cout << s.at(i);
        ini = i + 1;
      }
    }
  }
  return 0;
}
/* Definition */