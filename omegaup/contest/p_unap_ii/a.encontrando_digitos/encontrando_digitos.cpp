#include <iostream>
#include <limits>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n;
  int cantidad[10] = {0};
  string s;
  cin >> n;
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  // fflush(stdin);
  while (n--) {
    getline(cin, s, '\n');
    for (int i = 0; i < s.size(); i++) {
      if ((int)(s.at(i)) >= 48 && (int)(s.at(i)) <= 57) {
        cantidad[(s.at(i) - '0')] += 1;
      }
    }
  }
  for (int i = 0; i < 10; i++) {
    cout << "El " << i << " aparece " << cantidad[i] << " veces." << endl;
  }
  return 0;
}
/* Definition */