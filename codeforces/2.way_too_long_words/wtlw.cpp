#include <iostream>
#include <cstring>

using namespace std;

int main() {
  unsigned short int n;
  unsigned short int num_char;
  cin >> n;
  string words[n];
  for (unsigned short int i = 0; i < n; i++) {
    cin >> words[i];
  }
  for (unsigned short int i = 0; i < n; i++) {
    num_char = words[i].size();
    if (num_char > 10) {
      cout << words[i].at(0) << (num_char - 2) << words[i].at(num_char - 1) << endl;
    }
    else {
      cout << words[i] << endl;
    }
  }
  return 0;
}