#include <iostream>
#include <cmath>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, k;
  unsigned short int available_minutes;
  short int problems_can_solve;
  available_minutes = 240;
  cin >> n >> k;
  available_minutes = available_minutes - k;
  problems_can_solve = (-1 + sqrt((5 + (8 * available_minutes)) / 5)) / 2;
  if (problems_can_solve < 0) {
    problems_can_solve = (-1 - sqrt((5 + (8 * available_minutes)) / 5)) / 2;
  }
  if (problems_can_solve > n) {
    problems_can_solve = n;
  }
  cout << problems_can_solve << endl;
  return 0;
}