#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  unsigned short int number_expressions = 6;
  unsigned short int expressions[number_expressions];
  unsigned short int a, b, c, max;
  scanf("%hu", &a);
  scanf("%hu", &b);
  scanf("%hu", &c);
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
  printf("%hu\n", max);
  return 0;
}