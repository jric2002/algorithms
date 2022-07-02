#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int a[4], total_calories, size_s;
  string s;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  cin >> s;
  size_s = s.size();
  total_calories = 0;
  for (unsigned int i = 0; i < size_s; i++) {
    if (s[i] == '1') {
      total_calories += a[0];
    }
    else if (s[i] == '2') {
      total_calories += a[1];
    }
    else if (s[i] == '3') {
      total_calories += a[2];
    }
    else {
      total_calories += a[3];
    }
  }
  cout << total_calories << endl;
}