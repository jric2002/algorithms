#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string w, nw;
  unsigned short int size_w;
  bool s;
  cin >> w;
  size_w = w.size();
  nw = "";
  s = true;
  nw = nw + ((islower(w[0])) ? (char)toupper(w[0]) : (char)tolower(w[0]));
  for (unsigned short int i = 1; i < size_w; i++) {
    if (!isupper(w[i])) {
      s = false;
      break;
    }
    nw = nw + (char)tolower(w[i]);
  }
  if (s) {
    cout << nw << endl;
  }
  else {
    cout << w << endl;
  }
  return 0;
}