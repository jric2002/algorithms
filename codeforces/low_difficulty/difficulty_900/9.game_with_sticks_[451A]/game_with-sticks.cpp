#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m;
  cin >> n >> m;
  if ((min(n, m) % 2) == 0) {
    cout << "Malvika" << endl;
  }
  else {
    cout << "Akshat" << endl;
  }
  return 0;
}
/* Definition */