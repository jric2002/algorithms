#include <iostream>
#include <fstream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string file_name = "input.txt";
  ifstream file(file_name.c_str());
  if (file.is_open()) {
    unsigned int amount_bit_one[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    unsigned int amount_bit_zero[12] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    bool gamma_rate_in_bits[12];
    bool epsilon_rate_in_bits[12];
    unsigned int gamma_rate = 0, epsilon_rate = 0;
    unsigned int power_consumption = 0;
    string binary_number;
    // Count the number of bits 1 and 0
    while (!file.eof()) {
      file >> binary_number;
      for (unsigned short int position = 0; position < 12; position++) {
        if (binary_number[position] == '1') {
          amount_bit_one[position]++;
        }
        else if (binary_number[position] == '0') {
          amount_bit_zero[position]++;
        }
        else {
          continue;
        }
      }
    }
    // Calculation of gamma rate and epsilon rate
    for (unsigned short int position = 0; position < 12; position++) {
      if (amount_bit_one[position] > amount_bit_zero[position]) {
        gamma_rate_in_bits[position] = 1;
        epsilon_rate_in_bits[position] = 0;
      }
      else {
        gamma_rate_in_bits[position] = 0;
        epsilon_rate_in_bits[position] = 1;
      }
    }
    // Binary to decimal
    unsigned short int base = 1;
    for (signed short int position = 12 - 1; position >= 0; position--) {
      if (gamma_rate_in_bits[position] == 1) {
        gamma_rate += base;
      }
      if (epsilon_rate_in_bits[position] == 1) {
        epsilon_rate += base;
      }
      base = base * 2;
    }
    power_consumption = gamma_rate * epsilon_rate;
    cout << "Gamma rate: " << gamma_rate << endl;
    cout << "Epsilon rate: " << epsilon_rate << endl;
    cout << "Power consumption: " << power_consumption << endl;
    file.close();
  }
  else {
    cout << "Cannot open " << file_name << " file" << endl;
  }
  return 0;
}