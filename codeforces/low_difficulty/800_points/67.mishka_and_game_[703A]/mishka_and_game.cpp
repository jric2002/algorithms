#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, m, c, m_score = 0, c_score = 0;
  cin >> n;
  while (n--) {
    cin >> m >> c;
    if (m > c) {
      m_score++;
    }
    else if (m < c) {
      c_score++;
    }
    else {
      m_score++;
      c_score++;
    }
  }
  if (m_score > c_score) {
    cout << "Mishka" << endl;
  }
  else if (m_score < c_score) {
    cout << "Chris" << endl;
  }
  else {
    cout << "Friendship is magic!^^" << endl;
  }
  return 0;
}