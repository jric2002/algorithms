#include <iostream>
#include <cstring>
using namespace std;
int main() {
  int n = 256;
  int cantidad_caracteres[n] = {0};
  char c;
  string t;
  getline(cin, t, '\n');
  for (int i = 0; i < t.length(); i++) {
    cantidad_caracteres[(int)(t.at(i))] += 1;
  }
  for (int i = 0; i < n; i++) {
    if (cantidad_caracteres[i] != 0) {
      if (i == 32) {
        cout << "_";
      }
      else {
        cout << static_cast<char>(i);
      }
      cout << " = " << cantidad_caracteres[i] << endl;
    }
  }
  return 0;
}