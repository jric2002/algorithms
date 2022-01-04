#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int number_horseshoes = 4;
  unsigned long int s[number_horseshoes];
  unsigned short int min_horseshoes = 0;
  bool status[number_horseshoes];
  for (unsigned short int i = 0; i < number_horseshoes; i++) {
    status[i] = true;
    cin >> s[i];
  }
  for (unsigned short int i = 0; i < number_horseshoes; i++) {
    if (status[i]) {
      for (unsigned short int j = (i + 1); j < number_horseshoes; j++) {
        if (s[i] == s[j]) {
          status[j] = false;
          min_horseshoes++;
        }
      }
    }
  }
  cout << min_horseshoes << endl;
  return 0;
}