#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s;
  unsigned short int number_lowercase_letters = 0, number_uppercase_letters = 0;
  cin >> s;
  for (unsigned short int position = 0; position < s.size(); position++) {
    if (islower(s[position])) {
      number_lowercase_letters++;
    }
    else {
      number_uppercase_letters++;
    }
  }
  if (number_lowercase_letters >= number_uppercase_letters) {
    for (unsigned short int position = 0; position < s.size(); position++) {
      s[position] = tolower(s[position]);
    }
  }
  else {
    for (unsigned short int position = 0; position < s.size(); position++) {
      s[position] = toupper(s[position]);
    }
  }
  cout << s << endl;
  return 0;
}