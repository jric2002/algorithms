#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int x, min_num_steps;
  cin >> x;
  if ((x % 5) == 0) {
    min_num_steps = x / 5;
  }
  else {
    min_num_steps = (x / 5) + 1;
  }
  cout << min_num_steps << endl;
  return 0;
}