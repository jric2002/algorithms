#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  char word[] = {'h', 'e', 'l', 'l', 'o'};
  string s;
  unsigned short int size_s, size_w, p;
  cin >> s;
  size_s = s.size();
  size_w = sizeof(word)/sizeof(char);
  p = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    if (p < size_w) {
      if (s.at(i) == word[p]) {
        p++;
      }
    }
  }
  (p == size_w) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}