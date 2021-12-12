#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  signed short int n;
  unsigned int min_capacity = 0;
  unsigned int a, b, passengers = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b;
    passengers = (passengers - a) + b;
    if (passengers > min_capacity) {
      min_capacity = passengers;
    }
  }
  cout << min_capacity << endl;
  return 0;
}