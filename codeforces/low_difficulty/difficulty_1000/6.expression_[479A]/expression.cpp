#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int number_expressions = 6;
  unsigned short int expressions[number_expressions];
  unsigned short int a, b, c, max;
  cin >> a;
  cin >> b;
  cin >> c;
  expressions[0] = a + b + c;
  expressions[1] = a + b * c;
  expressions[2] = (a + b) * c;
  expressions[3] = a * b + c;
  expressions[4] = a * (b + c);
  expressions[5] = a * b * c;
  max = expressions[0];
  for (unsigned short int i = 1; i < number_expressions; i++) {
    if (expressions[i] > max) {
      max = expressions[i];
    }
  }
  cout << max << endl;
  return 0;
}