#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string string_one, string_two;
  cin >> string_one >> string_two;
  for (unsigned short int position = 0; position < string_one.size(); position++) {
    string_one[position] = tolower(string_one[position]);
  }
  for (unsigned short int position = 0; position < string_one.size(); position++) {
    string_two[position] = tolower(string_two[position]);
  }
  if (string_one < string_two) {
    cout << -1 << endl;
  }
  else if (string_one > string_two) {
    cout << 1 << endl;
  }
  else {
    cout << 0 << endl;
  }
  return 0;
}