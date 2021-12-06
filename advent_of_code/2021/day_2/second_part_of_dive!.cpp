#include <iostream>
#include <fstream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string file_name = "input.txt";
  ifstream file(file_name.c_str());
  if (file.is_open()) {
    int horizontal_position = 0;
    int depth = 0;
    int aim = 0;
    int result;
    string command;
    int x;
    while (!file.eof()) {
      file >> command >> x;
      if (command == "forward") {
        horizontal_position += x;
        depth += (aim * x);
      }
      else if (command == "down") {
        aim += x;
      }
      else if (command == "up") {
        aim -= x;
      }
      else {
        continue;
      }
    }
    result = horizontal_position * depth;
    cout << "Horizontal position: " << horizontal_position << " units" << endl;
    cout << "Depth: " << depth << " units" << endl;
    cout << "Aim: " << aim << " units" << endl;
    cout << "(Horizontal position)x(Depth): " << result << " units^2" << endl;
    file.close();
  }
  else {
    cout << "Cannot open " << file_name << " file" << endl;
  }
  return 0;
}