#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, a, total_seconds;
  unsigned short int greater_height, lower_height;
  unsigned last_position, pos_highest_height, pos_lowest_height;
  cin >> n;
  unsigned short int height_soldiers[n];
  last_position = n - 1;
  for (unsigned short int i = 0; i < n; i++) {
    cin >> a;
    height_soldiers[i] = a;
    if (i == 0) {
      greater_height = a;
      pos_highest_height = i;
      lower_height = a;
      pos_lowest_height = i;
    }
    else {
      if (greater_height < a) {
        greater_height = a;
        pos_highest_height = i;
      }
      if (lower_height >= a) {
        lower_height = a;
        pos_lowest_height = i;
      }
    }
  }
  if (pos_lowest_height > pos_highest_height) {
    total_seconds = pos_highest_height + (last_position - pos_lowest_height);
  }
  else {
    total_seconds = pos_highest_height + (last_position - pos_lowest_height) - 1;
  }
  cout << total_seconds << endl;
  return 0;
}