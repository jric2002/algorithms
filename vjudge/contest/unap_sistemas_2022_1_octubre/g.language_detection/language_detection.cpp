#include <iostream>
#include <cstring>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int i;
  string s;
  map<string, string> wl;
  wl.insert(pair<string, string>("HELLO", "ENGLISH"));
  wl.insert(pair<string, string>("HOLA", "SPANISH"));
  wl.insert(pair<string, string>("HALLO", "GERMAN"));
  wl.insert(pair<string, string>("BONJOUR", "FRENCH"));
  wl.insert(pair<string, string>("CIAO", "ITALIAN"));
  wl.insert(pair<string, string>("ZDRAVSTVUJTE", "RUSSIAN"));
  map<string, string>::iterator it;
  i = 1;
  while (cin >> s) {
    if (s == "#") {
      break;
    }
    else {
      it = wl.find(s);
      cout << "Case " << i << ": ";
      if (it != wl.end()) {
        cout << (*it).second;
      }
      else {
        cout << "UNKNOWN";
      }
      cout << endl;
    }
    i++;
  }
  return 0;
}
/* Definition */