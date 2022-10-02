#include <iostream>
#include <cstring>
#include <sstream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  int precio, total;
  while (getline(cin, s, '\n')) {
    istringstream ss(s);
    total = 0;
    while (ss >> precio) {
      total += precio;
    }
    cout << total << endl;
  }
  return 0;
}
/* Definition */