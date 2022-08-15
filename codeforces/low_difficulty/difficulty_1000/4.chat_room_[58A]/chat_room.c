#include <stdio.h>
#include <string.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char word[] = {'h', 'e', 'l', 'l', 'o'};
  char s[100];
  scanf("%s", &s);
  unsigned short int size_s, size_w, p;
  size_s = strlen(s);
  size_w = sizeof(word)/sizeof(char);
  p = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    if (p < size_w) {
      if (s[i] == word[p]) {
        p++;
      }
    }
  }
  (p == size_w) ? printf("YES\n") : printf("NO\n");
  return 0;
}