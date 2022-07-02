#include <iostream>
#include <cstring>
/* Author: José Rodolfo */
using namespace std;
int main() {
  string n;
  unsigned int quantity_numbers = 0;
  cin >> n;
  unsigned short int size_n = n.size();
  for (unsigned short position = 0; position < size_n; position++) {
    if (n[position] == '4' || n[position] == '7') {
      quantity_numbers++;
    }
  }
  if (quantity_numbers == 4 || quantity_numbers == 7) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
  return 0;
}