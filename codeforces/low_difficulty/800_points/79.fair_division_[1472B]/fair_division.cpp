#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned int t, n, a, alice_candy_weight, bob_candy_weight, amount_candies_1gram, amount_candies_2gram;
  cin >> t;
  while (t--) {
    cin >> n;
    alice_candy_weight = bob_candy_weight = 0;
    amount_candies_1gram = amount_candies_2gram = 0;
    for (unsigned short int i = 0; i < n; i++) {
      cin >> a;
      if (a == 1) {
        amount_candies_1gram += 1;
      }
      else {
        amount_candies_2gram += 1;
      }
    }
    while (amount_candies_2gram > 0) {
      if (alice_candy_weight < bob_candy_weight) {
        alice_candy_weight += 2;
      }
      else {
        bob_candy_weight += 2;
      }
      amount_candies_2gram -= 1;
    }
    while (amount_candies_1gram > 0) {
      if (alice_candy_weight < bob_candy_weight) {
        alice_candy_weight += 1;
      }
      else {
        bob_candy_weight += 1;
      }
      amount_candies_1gram -= 1;
    }
    if (alice_candy_weight == bob_candy_weight) {
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
  return 0;
}