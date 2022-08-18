#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char w[101], nw[101];
  unsigned short int size_w, i;
  bool s;
  scanf("%s", &w);
  size_w = strlen(w);
  w[size_w] = '\0';
  s = true;
  nw[0] = ((islower(w[0])) ? (char)toupper(w[0]) : (char)tolower(w[0]));
  i = 1;
  while (i < size_w) {
    if (!isupper(w[i])) {
      s = false;
      break;
    }
    nw[i] = (char)tolower(w[i]);
    i++;
  }
  nw[i] = '\0';
  if (s) {
    printf("%s\n", nw);
  }
  else {
    printf("%s\n", w);
  }
  return 0;
}