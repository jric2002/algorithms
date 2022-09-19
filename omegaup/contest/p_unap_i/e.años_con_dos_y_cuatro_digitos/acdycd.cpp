#include <iostream>
#include <cstring>
#include <regex>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string fecha, nueva_fecha;
  regex re("(\\d++)/(\\d+)/(\\d+)");
  cmatch cm;
  while (getline(cin, fecha, '\n')) {
    nueva_fecha = "";
    regex_match(fecha.c_str(), cm, re, regex_constants::match_default);
    nueva_fecha = nueva_fecha + string(cm[1]) + "/" + string(cm[2]) + "/";
    (stoi(cm[3]) >= 74) ? nueva_fecha += to_string(stoi(cm[3]) + 1900) : nueva_fecha += to_string(stoi(cm[3]) + 2000);
    cout << nueva_fecha << endl;
  }
  return 0;
}
/* Definition */