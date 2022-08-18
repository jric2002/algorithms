#include <stdio.h>
/* Author: José Rodolfo (jric2002) */
void bubbleSort(unsigned short int [], unsigned short int);
int main() {
  unsigned short int n;
  unsigned short int c[100];
  scanf("%hu", &n);
  for (unsigned short int i = 0; i < n; i++) {
    scanf("%hu", &c[i]);
  }
  bubbleSort(c, n);
  for (unsigned short int i = 0; i < n; i++) {
    printf("%i ", c[i]);
  }
  return 0;
}
void bubbleSort(unsigned short int a[], unsigned short int size_a) {
  int tn;
  for (int i = 1; i < size_a; i++) {
    for (int j = 0; j < (size_a - i); j++) {
      if (a[j] > a[j + 1]) {
        tn = a[j + 1];
        a[j + 1] = a[j];
        a[j] = tn;
      }
    }
  }
}