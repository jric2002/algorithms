#include <stdio.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  unsigned short int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
  unsigned short int n, size_ln, i;
  bool s;
  scanf("%hu", &n);
  size_ln = sizeof(lucky_numbers)/sizeof(unsigned short int);
  s = false;
  i = 0;
  while (i < size_ln && lucky_numbers[i] <= n) {
    if ((n % lucky_numbers[i]) == 0) {
      s = true;
      break;
    }
    i++;
  }
  (s) ? printf("YES\n") : printf("NO\n");
  return 0;
}