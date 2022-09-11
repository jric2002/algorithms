#include <iostream>
#include <vector>
#include <cstring>
#include <sstream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string nombre_completo;
  vector<string> apellidos_y_nombres;
  char delimiter = ' ';
  while (getline(cin, nombre_completo, '\n')) {
    stringstream ss;
    string token;
    ss << nombre_completo;
    while (getline(ss, token, delimiter)) {
      apellidos_y_nombres.push_back(token);
    }
    if (apellidos_y_nombres.size() >= 2 && apellidos_y_nombres.size() <= 4) {
      if (apellidos_y_nombres.size() == 2) {
        cout << apellidos_y_nombres[1];
        cout << " ";
        cout << apellidos_y_nombres[0];
      }
      else if (apellidos_y_nombres.size() == 3) {
        cout << apellidos_y_nombres[2];
        cout << " ";
        cout << apellidos_y_nombres[0];
        cout << " ";
        cout << apellidos_y_nombres[1];
      }
      else {
        cout << apellidos_y_nombres[2];
        cout << " ";
        cout << apellidos_y_nombres[3];
        cout << " ";
        cout << apellidos_y_nombres[0];
        cout << " ";
        cout << apellidos_y_nombres[1];
      }
      cout << endl;
    }
    else {
      cout << "*" << endl;
    }
    apellidos_y_nombres.clear();
  }
  return 0;
}
/* Definition */