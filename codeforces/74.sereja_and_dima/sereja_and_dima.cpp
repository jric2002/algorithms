#include <iostream>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, value, max_value, pl, pr;
  unsigned int sereja_score, dima_score;
  cin >> n;
  vector<unsigned short int> cards;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> value;
    cards.push_back(value);
  }
  sereja_score = dima_score = 0;
  pl = 0;
  pr = n - 1;
  for (unsigned short int i = 0; i < n; i++) {
    if (cards[pl] > cards[pr]) {
      max_value = cards[pl];
      pl++;
    }
    else {
      max_value = cards[pr];
      pr--;
    }
    if ((i % 2) == 0) {
      sereja_score += max_value;
    }
    else {
      dima_score += max_value;
    }
  }
  cout << sereja_score << " " << dima_score << endl;
  return 0;
}