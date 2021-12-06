#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n;
  unsigned short int stones_taken = 0;
  char current_stone, previous_stone;
  cin >> n;
  if (n != 1) {
    cin >> previous_stone;
    for (unsigned short int i = 0; i < (n - 1); i++) {
      cin >> current_stone;
      if (current_stone == previous_stone) {
        stones_taken++;
      }
      previous_stone = current_stone;
    }
  }
  cout << stones_taken << endl;
  return 0;
}