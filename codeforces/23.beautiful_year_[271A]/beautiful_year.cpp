#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int quantity_digits = 4;
  int year;
  string numbers;
  char number;
  bool is_different = false;
  int repeated_digits;
  cin >> year;
  while (!is_different) {
    year = year + 1;
    numbers = to_string(year);
    repeated_digits = 0;
    for (unsigned short int position = 0; position < quantity_digits; position++) {
      number = numbers[position];
      for (unsigned short int i = position + 1; i < quantity_digits; i++) {
        if (number == numbers[i]) {
          repeated_digits++;
        }
      }
    }
    if (repeated_digits == 0) {
      is_different = true;
    }
  }
  cout << year << endl;
  return 0;
}