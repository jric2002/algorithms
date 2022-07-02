#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  bool is_pangram;
  cin >> n;
  cin.ignore();
  char text[n + 1];
  cin.getline(text, n + 1);
  for (char lowercase_char = 'a', uppercase_char = 'A'; lowercase_char <= 'z' && uppercase_char <= 'Z'; lowercase_char += 1, uppercase_char += 1) {
    is_pangram = false;
    for (unsigned short int position = 0; position < n; position++) {
      if (lowercase_char == text[position] || uppercase_char == text[position]) {
        is_pangram = true;
        break;
      }
    }
    if (!is_pangram) {
      break;
    }
  }
  if (is_pangram) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}