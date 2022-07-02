#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned int a, s, max_welfare = 0, total_welfare = 0;
  cin >> n;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> a;
    if (a > max_welfare) {
      max_welfare = a;
    }
    total_welfare += a;
  }
  s = (n * max_welfare) - total_welfare;
  cout << s << endl;
  return 0;
}