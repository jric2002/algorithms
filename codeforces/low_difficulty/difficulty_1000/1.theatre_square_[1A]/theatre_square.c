#include <stdio.h>
#include <math.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  int n, m, a;
  long long int r;
  scanf("%i %li %i", &n, &m, &a);
  r = ceil(n / (double)a) * ceil(m / (double)a);
  printf("%lli\n", r);
  return 0;
}