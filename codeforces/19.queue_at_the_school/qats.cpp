#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, t;
  string s;
  cin >> n >> t;
  cin >> s;
  while (t--) {
    for (unsigned short int i = 0; i < (n - 1); i++) {
      if (s[i] == 'B' && s[i + 1] == 'G') {
        s[i] = 'G';
        s[i + 1] = 'B';
        i++;
      }
    }
  }
  cout << s << endl;
  return 0;
}