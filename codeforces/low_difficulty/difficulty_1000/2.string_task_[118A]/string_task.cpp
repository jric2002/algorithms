#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
  char ch;
  string s, o;
  unsigned short int size_s;
  bool is_vowel;
  cin >> s;
  size_s = s.size();
  o = "";
  for (unsigned short int i = 0; i < size_s; i++) {
    ch = tolower(s.at(i));
    is_vowel = false;
    for (char c : vowels) {
      if (c == ch) {
        is_vowel = true;
        break;
      }
    }
    if (!is_vowel) {
      o = o + '.' + ch;
    }
  }
  cout << o << endl;
  return 0;
}