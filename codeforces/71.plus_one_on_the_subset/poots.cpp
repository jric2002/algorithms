#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n;
  long int a, major, minor;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> a;
    major = minor = a;
    n--;
    while (n--) {
      cin >> a;
      if (major < a) {
        major = a;
      }
      if (minor > a) {
        minor = a;
      }
    }
    cout << (major - minor) << endl;
  }
  return 0;
}