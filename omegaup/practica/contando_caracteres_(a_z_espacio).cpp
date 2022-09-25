#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int cantidad_caracteres[27] = {0};
  char c;
  string t;
  int size_t;
  getline(cin, t, '\n');
  size_t = t.length();
  for (int i = 0; i < size_t; i++) {
    c = t.at(i);
    if ((int)(c) != 32) {
      cantidad_caracteres[(int)(t.at(i)) - 97] += 1;
    }
    else {
      cantidad_caracteres[26] += 1;
    }
  }
  for (int i = 0; i < 27; i++) {
    if (cantidad_caracteres[i] != 0) {
      if (i != 26) {
        cout << static_cast<char>(i + 97);
      }
      else {
        cout << "_";
      }
      cout << " = " << cantidad_caracteres[i] << endl;
    }
  }
  return 0;
}