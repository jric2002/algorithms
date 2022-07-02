#include <iostream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string username;
  char character;
  unsigned short int number_of_characters, repeated_characters = 0;
  string gender, message;
  cin >> username;
  number_of_characters = username.size();
  for (unsigned short int position = 0; position < number_of_characters; position++) {
    character = username[position];
    for (unsigned short int i = (position + 1); i < number_of_characters; i++) {
      if (character == username[i]) {
        repeated_characters++;
        break;
      }
    }
  }
  gender = (((number_of_characters - repeated_characters) % 2) != 0) ? "male" : "female";
  message = (gender == "female") ? "CHAT WITH HER!" : "IGNORE HIM!";
  cout << message << endl;
  return 0;
}