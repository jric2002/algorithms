#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  long long int n, k, temp, number;
  scanf("%lli %lli", &n, &k);
  temp = ((n % 2) == 0) ? (n / 2) : ((n + 1) / 2);
  number = (k <= temp) ? ((2 * k) - 1) : (2 * (k - temp));
  printf("%lld\n", number);
  return 0;
}