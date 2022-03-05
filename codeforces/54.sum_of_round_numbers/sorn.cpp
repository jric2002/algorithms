#include <iostream>
#include <cstring>
#include <cmath>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, d, o;
  signed short int k;
  string number, character;
  vector<unsigned short int> c;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> n;
    number = to_string(n);
    k = (number.size() - 1);
    for (unsigned short int j = 0; j < number.size() && k >= 0; j++) {
      character = number.at(k);
      d = stoi(character);
      o = d * pow(10, j);
      if (o != 0) {
        c.push_back(o);
      }
      k--;
    }
    cout << c.size() << endl;
    for (vector<unsigned short int>::iterator it = c.begin(); it != c.end(); it++) {
      cout << *it << " ";
    }
    cout << endl;
    c.clear();
  }
  return 0;
}