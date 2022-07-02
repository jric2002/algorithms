#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string borze_code, decoded_ternary_number;
  unsigned short int size_borze_code;
  cin >> borze_code;
  size_borze_code = borze_code.size();
  decoded_ternary_number = "";
  for (unsigned short int i = 0; i < size_borze_code; i++) {
    if (borze_code.at(i) == '.') {
      decoded_ternary_number += '0';
      continue;
    }
    if (borze_code.at(i) == '-' && borze_code.at(i + 1) == '.') {
      decoded_ternary_number += '1';
      i++;
      continue;
    }
    if (borze_code.at(i) == '-' && borze_code.at(i + 1) == '-') {
      decoded_ternary_number += '2';
      i++;
      continue;
    }
  }
  cout << decoded_ternary_number << endl;
  return 0;
}