#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string letters, different_letters = "";
  char letter;
  bool exist;
  unsigned short int size_letters, letter_position;
  getline(cin, letters);
  size_letters = letters.size();
  if (size_letters > 2) {
    for (unsigned short int i = 1; i < size_letters; i += 3) {
      letter = letters[i];
      letter_position = 0;
      exist = false;
      while (letter_position < different_letters.size()) {
        if (letter == different_letters[letter_position]) {
          exist = true;
          break;
        }
        letter_position += 1;
      }
      if (!exist) {
        different_letters += letter;
      }
    }
  }
  cout << different_letters.size() << endl;
  return 0;
}