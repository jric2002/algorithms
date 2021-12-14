#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int n, games_won_anton = 0, games_won_danik = 0;
  string s;
  cin >> n;
  cin >> s;
  while (n--) {
    if (s[n] == 'A') {
      games_won_anton++;
    }
    else {
      games_won_danik++;
    }
  }
  if (games_won_anton > games_won_danik) {
    cout << "Anton" << endl;
  }
  else if (games_won_anton < games_won_danik) {
    cout << "Danik" << endl;
  }
  else {
    cout << "Friendship" << endl;
  }
  return 0;
}