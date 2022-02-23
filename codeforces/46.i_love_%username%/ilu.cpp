#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int score, max_score, min_score;
  unsigned short int num_amazing = 0;
  cin >> n;
  cin >> score;
  max_score = min_score = score;
  for (unsigned short int i = 1; i < n; i++) {
    cin >> score;
    if (score > max_score) {
      max_score = score;
      num_amazing++;
    }
    if (score < min_score) {
      min_score = score;
      num_amazing++;
    }
  }
  cout << num_amazing << endl;
  return 0;
}