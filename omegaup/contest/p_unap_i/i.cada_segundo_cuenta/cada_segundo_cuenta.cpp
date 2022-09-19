#include <iostream>
#include <cstring>
#include <regex>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  string ini, fin;
  int seg_ini, seg_fin;
  regex re("(\\d++)\\s:\\s(\\d+)\\s:\\s(\\d+)");
  cmatch cm_ini, cm_fin;
  getline(cin, ini, '\n');
  getline(cin, fin, '\n');
  regex_match(ini.c_str(), cm_ini, re, regex_constants::match_default);
  seg_ini = (stoi(cm_ini[1]) * 3600) + (stoi(cm_ini[2]) * 60) + (stoi(cm_ini[3]));
  regex_match(fin.c_str(), cm_fin, re, regex_constants::match_default);
  seg_fin = (stoi(cm_fin[1]) * 3600) + (stoi(cm_fin[2]) * 60) + (stoi(cm_fin[3]));
  (seg_ini <= seg_fin) ? cout << (seg_fin - seg_ini) << endl : cout << (((24 * 3600) - seg_ini) + seg_fin) << endl;
  return 0;
}
/* Definition */