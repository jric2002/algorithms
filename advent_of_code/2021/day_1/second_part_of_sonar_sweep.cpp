#include <iostream>
#include <fstream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int depth_one, depth_two, depth_three;
  unsigned short int first_sum, second_sum, increases = 0;
  const string file_name = "input.txt";
  ifstream file(file_name.c_str());
  if (file.is_open()) {
    file >> depth_one;
    file >> depth_two;
    file >> depth_three;
    first_sum = depth_one + depth_two + depth_three;
    while (!file.eof()) {
      depth_one = depth_two;
      depth_two = depth_three;
      file >> depth_three;
      second_sum = depth_one + depth_two + depth_three;
      if (second_sum > first_sum) {
        increases++;
      }
      first_sum = second_sum;
    }
    cout << increases << endl;
    file.close();
  }
  else {
    cout << "Cannot open " << file_name << " file" << endl;
  }
  return 0;
}