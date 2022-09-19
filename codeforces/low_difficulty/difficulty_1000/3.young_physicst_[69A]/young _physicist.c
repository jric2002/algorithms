#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
/* Declaration */
int main() {
  short int n;
  short int xi, yi, zi;
  short int xr, yr, zr;
  scanf("%hi", &n);
  xr = yr = zr = 0;
  while (n--) {
    scanf("%hi %hi %hi", &xi, &yi, &zi);
    xr += xi;
    yr += yi;
    zr += zi;
  }
  if (xr == 0 && yr == 0 && zr == 0) {
    printf("YES\n");
  }
  else {
    printf("NO\n");
  }
  return 0;
}
/* Definition */