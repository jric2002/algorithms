#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string name_guest, name_host, text, letters;
  bool exist;
  cin >> name_guest;
  cin >> name_host;
  cin >> letters;
  text = name_guest + name_host;
  for (unsigned short int i = 0; i < text.size() && !letters.empty(); i++) {
    unsigned short int j = 0;
    exist = false;
    while (j < letters.size() && !letters.empty()) {
      if (text[i] == letters[j]) {
        exist = true;
        letters.erase(j, 1);
        break;
      }
      j++;
    }
    if (!exist) {
      break;
    }
  }
  if (letters.empty() && exist) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}