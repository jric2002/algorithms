#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, k, fib, fib1, fib2;
  vector<int> sumandos;
  cin >> n;
  fib1 = 1;
  fib2 = 2;
  k = 3;
  while (n != 0) {
    if (n == 1 || n == 2) {
      k = n;
      n = 0;
      sumandos.push_back(k);
    }
    else {
      fib = fib2 + fib1;
      if (fib >= n) {
        if (fib == n) {
          n -= fib;
          sumandos.push_back(k);
        }
        else {
          n -= fib2;
          sumandos.push_back(k - 1);
        }
        fib1 = 1;
        fib2 = 2;
        k = 3;
        continue;
      }
      k++;
      fib1 = fib2;
      fib2 = fib;
    }
  }
  cout << sumandos.size() << endl;
  for (int s : sumandos) {
    cout << s << " ";
  }
  cout << endl;
  return 0;
}
/* Definition */