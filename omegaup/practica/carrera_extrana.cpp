#include <iostream>
// https://omegaup.com/arena/problem/CarreraExtrana
using namespace std;
int main(int argc, char *argv[]) {
  int tc = 2, n, min_time, c;
  while (tc--) {
    cin >> n;
    min_time = 0;
    c= 1;
    while (c != n) {
      for (int i = c; i >= 1; i--) {
        if ((c % i) == 0 && (c + i) <= n) {
          c += i;
          min_time++;
          break;
        }
      }
    }
    cout << min_time << " ";
  }
  cout << endl;
  return 0;
}