#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned long int n, min_num_bills = 0;
  unsigned short int dollars[5] = {1, 5, 10, 20, 100};
  cin >> n;
  while (n != 0) {
    for (short int i = (sizeof(dollars)/sizeof(unsigned short int) - 1); i >= 0; i--) {
      if (n >= dollars[i]) {
        min_num_bills += (n / dollars[i]);
        n = (n % dollars[i]);
      }
    }
  }
  cout << min_num_bills << endl;
  return 0;
}