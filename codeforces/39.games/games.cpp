#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, h, a;
  cin >> n;
  unsigned short int color_uniforms[n][2];
  unsigned short int playing_as_guest = 0;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> h >> a;
    color_uniforms[i][0] = h;
    color_uniforms[i][1] = a;
  }
  for (unsigned short int i = 0; i < n; i++) {
    for (unsigned short int j = 0; j < n; j++) {
      if (i != j) {
        if (color_uniforms[i][0] == color_uniforms[j][1]) {
          playing_as_guest += 1;
        }
      }
    }
  }
  cout << playing_as_guest << endl;
  return 0;
}