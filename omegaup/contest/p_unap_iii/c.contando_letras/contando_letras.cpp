#include <iostream>
#include <cstring>
#include <limits>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string t;
  int i, f;
  int cantidad_caracteres[26] = {0};
  cin >> i >> f;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  getline(cin, t, '\n');
  while (i <= f) {
    if ((int)(t.at(i)) >= 97 && (int)(t.at(i)) <= 122) {
      cantidad_caracteres[(int)(t.at(i)) - 97] += 1;
    }
    i++;
  }
  for (int pos = 0; pos < 26; pos++) {
    cout << static_cast<char>(pos + 97) << "=" << cantidad_caracteres[pos] << endl;
  }
  return 0;
}
/* Definition */