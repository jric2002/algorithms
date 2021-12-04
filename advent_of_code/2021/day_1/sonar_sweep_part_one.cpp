#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int depth, depth_previous;
  unsigned int increases = 0;
  cin >> depth_previous;
  while (cin >> depth) {
    if (depth > depth_previous) {
      increases++;
    }
    depth_previous = depth;
  }
  cout << increases << endl;
  return 0;
}