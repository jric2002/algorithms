#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
template <typename T>
double average(vector<T>);
int main(int argc, char *argv[]) {
  int n, x, a;
  double f = 1;
  vector<double> as;
  cin >> n >> x;
  while (n--) {
    cin >> a;
    as.push_back(a);
  }
  while (average(as) > x) {
    f += 0.000000000001;
    for (int i = 0; i < as.size(); i++) {
      as.at(i) /= f;
    }
  }
  for (int i = 0; i < as.size(); i++) {
    cout << as.at(i);
    if (i != as.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
template <typename T>
double average(vector<T> as) {
  double avg = 0;
  for (double ai : as) {
    avg += pow(ai, 2);
  }
  avg = avg / as.size();
  return avg;
}