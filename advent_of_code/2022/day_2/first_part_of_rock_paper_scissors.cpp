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
    if (opp[co] == me[cme]) {
      ts = ts + me[cme] + 3;
    }
    else if ((opp[co] == 3 && me[cme] == 1) || (opp[co] == 1 && me[cme] == 2) || (opp[co] == 2 && me[cme] == 3)) {
      ts = ts + me[cme] + 6;
    }
    else {
      ts = ts + me[cme];
    }
  }
  cout << "My score: " << ts << endl;
  return 0;
}
/* Definition */