#include <iostream>
#include <cstring>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s1, s2;
  cin >> s1;
  cin >> s2;
  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());
  if (s1 == s2) {
    cout << "ANAGRAMA!" << endl;
  }
  else {
    cout << "No :(" << endl;
  }
  return 0;
}
/* Definition */