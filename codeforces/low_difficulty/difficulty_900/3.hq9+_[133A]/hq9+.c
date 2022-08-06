#include <stdio.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char kw[4] = {'H', 'Q', '9', '+'};
  char p[100];
  unsigned short int size_p, size_kw;
  bool output;
  scanf("%s", &p);
  size_p = strlen(p);
  size_kw = sizeof(kw)/sizeof(char);
  output = false;
  for (unsigned short int i = 0; i < size_p && !output; i++) {
    for (unsigned short int j = 0; j < (size_kw - 1); j++) {
      if (p[i] == kw[j]) {
        output = true;
        break;
      }
    }
  }
  (output) ? printf("YES\n") : printf("NO\n");
  return 0;
}