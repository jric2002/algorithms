#include <iostream>
#include <cstring>
#include <cstdlib>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string n;
  int num;
  char c, c_n;
  string numeros[5][10] = {
    {"###", "#", "###", "###", "# #", "###", "###", "###", "###", "###"},
    {"# #", "#", "  #", "  #", "# #", "#  ", "#  ", "  #", "# #", "# #"},
    {"# #", "#", "###", "###", "###", "###", "###", "  #", "###", "###"},
    {"# #", "#", "#  ", "  #", "  #", "  #", "# #", "  #", "# #", "  #"},
    {"###", "#", "###", "###", "  #", "###", "###", "  #", "###", "###"}
  };
  cin >> n >> c;
  for (int row = 0; row < 5; row++) {
    for (int i = 0; i < n.length(); i++) {
      c_n = n.at(i);
      num = atoi(&c_n);
      for (int column = 0; column < (numeros[row][num]).length(); column++) {
        if ((numeros[row][num]).at(column) == '#') {
          cout << c;
        }
        else {
          cout << (numeros[row][num]).at(column);
        }
      }
      if (i != (n.length() - 1)) {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
/* Definition */