#include <iostream>
#include <string.h>
using namespace std;
int main() {
  char A[200], B[200], R[100000];
  int i, j;
  for (i = 0; i < 10000; i++) {
    R[i] = 0;
  }
  cin >> A;
  cin >> B;
  for (i = 0; i < strlen(A)/2; i++) {
    char temp = A[strlen(A) - i - 1];
    A[strlen(A) -i - 1] = A[i];
    A[i] = temp;
  }
  for (i = 0; i < strlen(B)/2; i++) {
    char temp = B[strlen(B) - i - 1];
    B[strlen(B) -i - 1] = B[i];
    B[i] = temp;
  }
  for (i = 0; i < strlen(B); i++) {
    if (B[i] == '1') {
      int c = 0;
      for (j = 0; j < strlen(A); j++) {
        int r = (R[i+j] - '0') + (A[j] - '0') + c;
        c = r / 2;
        r = r % 2;
        R[i + j] = r + '0';
      }
      R[i + j] = c + '0';
    }
  }
  int t = strlen(A) + strlen(B) + 10;
  for (; R[t] != 1; t--) {
    if (t >= 0) {
      for (i = t; i >= 0; i--) {
        cout << R[i];
      }
    }
    else {
      cout << "0";
    }
  }
  cout << endl;
  return 0;
}