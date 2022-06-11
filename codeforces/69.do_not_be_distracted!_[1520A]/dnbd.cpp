#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int t, n;
  string tasks, temp;
  char t_before;
  bool s;
  cin >> t;
  while (t--) {
    cin >> n;
    cin >> tasks;
    temp = "";
    t_before = '.';
    s = false;
    for (int i = 0; i < n; i++) {
      if (t_before != tasks[i]) {
        for (int j = 0; j < temp.size(); j++) {
          if (tasks[i] == temp.at(j)) {
            s = true;
            break;
          }
        }
        if (!s) {
          temp += tasks[i];
          t_before = tasks[i];
        }
        else {
          break;
        }
      }
    }
    if (s) {
      cout << "NO" << endl;
    }
    else {
      cout << "YES" << endl;
    }
  }
  return 0;
}