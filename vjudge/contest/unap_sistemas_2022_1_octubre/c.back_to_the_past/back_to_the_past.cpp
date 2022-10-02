#include <iostream>
#include <cstring>
#include <map>
/* Author: José Rodolfo (jric2002) */
using namespace std;
/* Declaration */
int main() {
  int d, m, y;
  map<int, string> days, months;
  days.insert(pair<int, string>(1, "Sunday"));
  days.insert(pair<int, string>(2, "Monday"));
  days.insert(pair<int, string>(3, "Tuesday"));
  days.insert(pair<int, string>(4, "Wednesday"));
  days.insert(pair<int, string>(5, "Thursday"));
  days.insert(pair<int, string>(6, "Friday"));
  days.insert(pair<int, string>(7, "Saturday"));
  months.insert(pair<int, string>(1, "January"));
  months.insert(pair<int, string>(2, "February"));
  months.insert(pair<int, string>(3, "March"));
  months.insert(pair<int, string>(4, "April"));
  months.insert(pair<int, string>(5, "May"));
  months.insert(pair<int, string>(6, "June"));
  months.insert(pair<int, string>(7, "July"));
  months.insert(pair<int, string>(8, "August"));
  months.insert(pair<int, string>(9, "September"));
  months.insert(pair<int, string>(10, "October"));
  months.insert(pair<int, string>(11, "November"));
  months.insert(pair<int, string>(12, "December"));
  d = 29;
  m = 5;
  y = 2013;
  cout << months[m] << " " << d << ", " << y << " " << days[(d % 7)+ 3] << endl;
  return 0;
}
/* Definition */