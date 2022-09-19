#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string name;
  cin >> name;
  for (int i = 0; i < 4 && i < name.size(); i++) {
    cout << name.at(i) << " ASCII value is " << (int)(name.at(i)) << endl;
  }
  return 0;
}
/* Definition */