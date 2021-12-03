#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string s;
  cin >> s;
  unsigned short int num_elements = s.size();
  char temp_num;
  for (unsigned short int position = 1; position < ((num_elements + 1) / 2); position++) {
    for (unsigned short int index = 0; index < (num_elements - position); index += 2) {
      if (s[index] > s[index + 2]) {
        temp_num = s[index];
        s[index] = s[index + 2];
        s[index + 2] = temp_num;
      }
    }
  }
  cout << s << endl;
  return 0;
}