#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int n, m, num, max_n;
  vector<int> numeros;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> num;
    numeros.push_back(num);
  }
  max_n = *max_element(numeros.begin(), numeros.end());
  m = n - count(numeros.begin(), numeros.end(), max_n);
  cout << m << endl;
  for (int ni : numeros) {
    if (ni != max_n) {
      cout << ni << " ";
    }
  }
  return 0;
}
/* Definition */