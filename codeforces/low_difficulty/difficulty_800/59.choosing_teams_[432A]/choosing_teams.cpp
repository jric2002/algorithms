#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, k, y, max_num_teams;
  unsigned short int counter = 0;
  cin >> n >> k;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> y;
    if ((5 - y) >= k) {
      counter += 1;
    }
  }
  max_num_teams = floor(counter / 3);
  cout << max_num_teams << endl;
  return 0;
}