#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char p[100], sub_p[8];
  unsigned short int size_p;
  bool dangerous;
  scanf("%s", &p);
  size_p = strlen(p);
  dangerous = false;
  if (size_p >= 7) {
    for (unsigned short int i = 0; i < (size_p - 7 + 1); i++) {
      strncpy(sub_p, &p[i], 7);
      sub_p[7] = '\0';
      if (strcmp(sub_p, "0000000") == 0 || strcmp(sub_p, "1111111") == 0) {
        dangerous = true;
        break;
      }
    }
  }
  (dangerous) ? printf("YES\n") : printf("NO\n");
  return 0;
}