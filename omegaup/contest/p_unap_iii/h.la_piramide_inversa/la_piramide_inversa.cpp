#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  while (getline(cin, s, '\n')) {
    for (int i = 0; i < s.length(); i++) {
      for (int j = 0; j < (s.length() - 1 - i); j++) {
        cout << " ";
      }
      for (int j = (s.length() - 1 - i); j < s.length(); j++) {
        cout << s.at(j);
      }
      cout << endl;
    }
  }
  return 0;
}
/* Definition */