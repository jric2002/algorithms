#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, p;
  cin >> n;
  unsigned short int friends[n];
  for (unsigned short int i = 0; i < n; i++) {
    cin >> p;
    friends[p - 1] = (i + 1);
  }
  for (unsigned short i = 0; i < n; i++) {
    cout << friends[i] << " ";
  }
  cout << endl;
  return 0;
}