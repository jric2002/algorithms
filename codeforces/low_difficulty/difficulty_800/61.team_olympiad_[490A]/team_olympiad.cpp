#include <iostream>
#include <vector>
#include <algorithm>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int n, t, w;
  vector<unsigned short int> programming_students;
  vector<unsigned short int> maths_students;
  vector<unsigned short int> pe_students;
  vector<unsigned short int> number_student_skill;
  cin >> n;
  for (unsigned short int i = 1; i <= n; i++) {
    cin >> t;
    if (t == 1) {
      programming_students.push_back(i);
    }
    else if (t == 2) {
      maths_students.push_back(i);
    }
    else {
      pe_students.push_back(i);
    }
  }
  number_student_skill.push_back(programming_students.size());
  number_student_skill.push_back(maths_students.size());
  number_student_skill.push_back(pe_students.size());
  sort(number_student_skill.begin(), number_student_skill.end());
  w = number_student_skill.at(0);
  cout << w << endl;
  for (unsigned short int i = 0; i < w; i++) {
    cout << programming_students.at(i) << " " << maths_students.at(i) << " " << pe_students.at(i) << endl;
  }
  return 0;
}