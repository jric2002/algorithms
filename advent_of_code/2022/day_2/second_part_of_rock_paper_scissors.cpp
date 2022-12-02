#include <iostream>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  map<char, int> opp, me;
  opp.insert(pair<char, int>('A', 1));
  opp.insert(pair<char, int>('B', 2));
  opp.insert(pair<char, int>('C', 3));
  me.insert(pair<char, int>('X', 1));
  me.insert(pair<char, int>('Y', 2));
  me.insert(pair<char, int>('Z', 3));
  char co, cme;
  long long int ts;
  ts = 0;
  while (cin >> co >> cme) {
    if (cme == 'X') {
      if (co == 'A') {
        ts = ts + me['Z'];
      }
      else if (co == 'B') {
        ts = ts + me['X'];
      }
      else {
        ts = ts + me['Y'];
      }
    }
    else if (cme == 'Y') {
      ts = ts + opp[co] + 3;
    }
    else {
      if (co == 'A') {
        ts = ts + me['Y'];
      }
      else if (co == 'B') {
        ts = ts + me['Z'];
      }
      else {
        ts = ts + me['X'];
      }
      ts += 6;
    }
  }
  cout << "My score: " << ts << endl;
  return 0;
}
/* Definition */