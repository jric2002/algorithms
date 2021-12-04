#include <iostream>
#include <fstream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  unsigned short int depth, depth_previous;
  unsigned int increases = 0;
  string file_name = "input.txt";
  ifstream file(file_name.c_str());
  if (file.is_open()) {
    file >> depth_previous;
    while (!file.eof()) {
      file >> depth;
      if (depth > depth_previous) {
        increases++;
      }
      depth_previous = depth;
    }
    cout << increases << endl;
    file.close();
  }
  else {
    cout << "Cannot open " << file_name << " file" << endl;
  }
  return 0;
}