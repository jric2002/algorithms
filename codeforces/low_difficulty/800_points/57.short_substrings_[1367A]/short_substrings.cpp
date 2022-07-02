#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t;
  string b, sub_b, a;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> b;
    if (b.size() > 2) {
      sub_b = b.substr(1, b.size() - 2);
      for (unsigned short int j = 2; j <= sub_b.size(); j += 2) {
        j = j - 1;
        sub_b.erase(j, 1);
      }
      a = b.at(0) + sub_b + b.at(b.size() - 1);
    }
    else {
      a = b;
    }
    cout << a << endl;
  }
  return 0;
}