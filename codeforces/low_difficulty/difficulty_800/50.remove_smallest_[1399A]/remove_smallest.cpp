#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, a;
  vector<unsigned short int> numbers;
  bool status;
  cin >> t;
  for (unsigned short int i = 0; i < t; i++) {
    cin >> n;
    for (unsigned short int j = 0; j < n; j++) {
      cin >> a;
      numbers.push_back(a);
    }
    sort(numbers.begin(), numbers.end());
    status = true;
    for (unsigned short int j = 0; j < (n - 1); j++) {
      if (!(abs(numbers.at(j) - numbers.at(j + 1)) <= 1)) {
        status = false;
        break;
      }
    }
    if (status) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
    numbers.clear();
  }
  return 0;
}