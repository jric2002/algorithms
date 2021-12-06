#include <iostream>
#include <string>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int num_char;
  cin >> n;
  if (n >= 1 && n <= 100) {
    string word;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> word;
      num_char = word.size();
      if (num_char > 10) {
        cout << word.at(0) << (num_char - 2) << word.at(num_char - 1) << endl;
      }
      else {
        cout << word << endl;
      }
    }
  }
  return 0;
}