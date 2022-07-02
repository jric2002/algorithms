#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  short int n, k;
  cin >> n >> k;
  if (k >= 1 && k <= n && n <= 50) {
    unsigned short int score, reference_score = 1, next_round = 0;
    for (unsigned short int i = 1; i <= n; i++) {
      cin >> score;
      if (score >= reference_score) {
        if (i == k) {
          reference_score = score;
        }
        next_round++;
      }
    }
    cout << next_round << endl;
  }
  return 0;
}