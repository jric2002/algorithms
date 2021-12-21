#include <iostream>
/* Author: José Rodolfo */
using namespace std;
int main() {
  unsigned short int n;
  char opinion;
  bool is_easy = true;
  cin >> n;
  while (n--) {
    cin >> opinion;
    if (opinion == '1') {
      is_easy = false;
    }
  }
  if (is_easy) {
    cout << "EASY" << endl;
  }
  else {
    cout << "HARD" << endl;
  }
  return 0;
}