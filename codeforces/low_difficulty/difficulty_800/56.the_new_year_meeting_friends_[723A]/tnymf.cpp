#include <iostream>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int coordinates[3], min_dis = 0;
  cin >> coordinates[0] >> coordinates[1] >> coordinates[2];
  sort(coordinates, coordinates + 3);
  min_dis = (coordinates[1] - coordinates[0]) + (coordinates[2] - coordinates[1]);
  cout << min_dis << endl;
  return 0;
}