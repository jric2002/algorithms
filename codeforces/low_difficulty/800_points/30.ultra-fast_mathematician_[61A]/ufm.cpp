#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int number_size;
  string n1, n2, result = "";
  cin >> n1;
  cin >> n2;
  number_size = n1.size();
  for (unsigned short int position = 0; position < number_size; position++) {
    if (n1[position] != n2[position]) {
      result += '1';
    }
    else {
      result += '0';
    }
  }
  cout << result << endl;
  return 0;
}