#include <iostream>
#include <algorithm>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n, k, max_sum, number;
  vector<unsigned short int> a;
  vector<unsigned short int> b;
  cin >> t;
  while (t--) {
    cin >> n >> k;
    for (unsigned short int i = 0; i < (n * 2); i++) {
      cin >> number;
      if (i < n) {
        a.push_back(number);
      }
      else {
        b.push_back(number);
      }
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (unsigned short int i = 0, j = (n - 1); (i < k) && (a[i] < b[j]); i++, j--) {
      number = a[i];
      a[i] = b[j];
      b[j] = number;
    }
    max_sum = 0;
    for (vector<unsigned short int>::iterator it = a.begin(); it != a.end(); it++) {
      max_sum += *it;
    }
    cout << max_sum << endl;
    a.clear();
    b.clear();
  }
  return 0;
}