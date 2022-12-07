#include <iostream>
#include <cstring>
#include <sstream>
#include <stack>
#include <vector>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string s;
  stringstream ss;
  int amount, p1, p2;
  vector<stack<char>> v;
  vector<vector<char>> av(10);
  while (getline(cin, s, '\n')) {
    if (!s.empty()) {
      for (int i = 0; i < s.size(); i++) {
        if (s.at(i) >= 65 && s.at(i) <= 90) {
          (av.at(i/4)).push_back(s.at(i));
        }
      }
    }
    else {
      break;
    }
  }
  for (vector<char> a : av) {
    if (!a.empty()) {
      stack<char> st;
      for (int i = a.size() - 1; i >= 0; i--) {
        st.push(a.at(i));
      }
      v.push_back(st);
    }
  }
  while (getline(cin, s, '\n')) {
    ss << s;
    ss >> s >> amount >> s >> p1 >> s >> p2;
    for (int i = 0; i < amount; i++) {
      (v.at(p2 - 1)).push((v.at(p1 - 1)).top());
      (v.at(p1 - 1)).pop();
    }
    ss.clear();
  }
  s.clear();
  for (stack<char> st : v) {
    if (!st.empty()) {
      s += st.top();
    }
  }
  cout << "Result: " << s << endl;
  return 0;
}
/* Definition */