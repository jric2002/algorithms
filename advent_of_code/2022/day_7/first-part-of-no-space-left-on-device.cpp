#include <iostream>
#include <cstring>
#include <sstream>
#include <vector>
#include <utility>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
template <typename T>
string getPath(vector<T>);
int main() {
  string s;
  stringstream ss;
  map<vector<string>, vector<long long int>> ds;
  vector<string> p;
  bool status;
  long long int t, tt, file_size;
  int i;
  t = 0;
  while (getline(cin, s, '\n')) {
    if (s.at(0) == '$') {
      if (s.substr(2, 2) == "cd") {
        if (s.substr(5, 2) != "..") {
          p.push_back(s.substr(5, string::npos));
        }
        else {
          p.pop_back();
        }
      }
    }
    else {
      if (s.at(0) != 'd') {
        ss << s;
        ss >> file_size >> s;
        ds[p].push_back(file_size);
        ss.clear();
      }
    }
  }
  for (pair<vector<string>, vector<long long int>> d1 : ds) {
    tt = 0;
    for (pair<vector<string>, vector<long long int>> d2 : ds) {
      if ((d2.first).size() >= (d1.first).size()) {
        status = true;
        i = 0;
        for (string dd : d1.first) {
          if (dd != (d2.first).at(i)) {
            status = false;
            break;
          }
          i++;
        }
        if (status) {
          for (long long int fs : d2.second) {
            tt += fs;
          }
        }
      }
    }
    cout << getPath(d1.first) << " -> " << tt << endl;
    if (tt <= 100000) {
      t += tt;
    }
  }
  cout << "Total: " << t << endl;
  return 0;
}
/* Definition */
template <typename T>
string getPath(vector<T> p) {
  string s;
  int i = 0;
  while (i < (p.size() - 1)) {
    s = s + p.at(i) + "/";
    i++;
  }
  s = s + p.at(i);
  return s;
}