#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  int n, max_sg, size_sg, ai_prev, ai_current;
  cin >> n;
  max_sg = size_sg = 1;
  cin >> ai_prev;
  n--;
  while (n--) {
    cin >> ai_current;
    if (ai_prev <= ai_current) {
      size_sg += 1;
    }
    else {
      if (size_sg > max_sg) {
        max_sg = size_sg;
      }
      size_sg = 1;
    }
    ai_prev = ai_current;
  }
  if (size_sg > max_sg) {
    max_sg = size_sg;
  }
  cout << max_sg << endl;
  return 0;
}