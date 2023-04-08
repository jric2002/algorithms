#include <iostream>
// https://omegaup.com/arena/problem/caminos
using namespace std;
double fact(int);
int main(int argc, char *argv[]) {
  int h, w;
  cin >> h >> w;
  // Permutación con repeteción
  cout.setf(ios::fixed);
  cout.precision(0);
  cout << (fact(h + w) / (fact(h) * fact(w))) << endl;
  cout.unsetf(ios::fixed);
  return 0;
}
double fact(int n) {
  if (n != 0) {
    return n * fact(n - 1);
  }
  else {
    return 1;
  }
}