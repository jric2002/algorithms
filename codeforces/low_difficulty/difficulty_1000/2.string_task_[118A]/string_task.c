#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/* Author: José Rodolfo (jric2002) */
int main() {
  char vowels[] = {'a', 'o', 'y', 'e', 'u', 'i'};
  char s[100], o[201], ch;
  unsigned short int size_s, size_v = 6, pos;
  bool is_vowel;
  scanf("%s", &s);
  size_s = strlen(s);
  pos = 0;
  for (unsigned short int i = 0; i < size_s; i++) {
    ch = tolower(s[i]);
    is_vowel = false;
    for (unsigned short int j = 0; j < size_v; j++) {
      if (vowels[j] == ch) {
        is_vowel = true;
        break;
      }
    }
    if (!is_vowel) {
      o[pos] = '.';
      o[pos + 1] = ch;
      pos += 2;
    }
  }
  o[pos] = '\0';
  printf("%s", o);
  return 0;
}