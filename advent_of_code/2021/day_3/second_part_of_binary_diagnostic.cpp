#include <iostream>
#include <fstream>
#include <cstring>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  string file_name = "input.txt";
  ifstream file(file_name.c_str());
  if (file.is_open()) {
    unsigned short int quantity_bits = 12;
    unsigned int amount_bit_one, amount_bit_zero;
    string first_bits_rating;
    string oxygen_generator_rating_in_bits;
    unsigned int oxygen_generator_rating = 0;
    string co2_scrubber_rating_in_bits;
    unsigned int co2_scrubber_rating = 0;
    unsigned int life_support_rating;
    string binary_number;
    string first_bits_binary_number;
    unsigned int binary_numbers_found;
    // Searching oxygen generator rating and co2 scrubber rating
    for (unsigned short int rating_number = 0; rating_number < 2; rating_number++) {
      first_bits_rating = "";
      for (unsigned short int position = 0; position < quantity_bits; position++) {
        amount_bit_one = amount_bit_zero = 0;
        binary_numbers_found = 0;
        while (!file.eof()) {
          file >> binary_number;
          first_bits_binary_number = binary_number.substr(0, position);
          if (first_bits_binary_number == first_bits_rating) {
            if (binary_number[position] == '1') {
              amount_bit_one++;
            }
            else {
              amount_bit_zero++;
            }
            binary_numbers_found++;
          }
        }
        if (amount_bit_one >= amount_bit_zero) {
          if (binary_numbers_found == 1) {
            first_bits_rating += "1";
          }
          else {
            if (rating_number == 0) {
              first_bits_rating += "1";
            }
            else {
              first_bits_rating += "0";
            }
          }
        }
        else {
          if (binary_numbers_found == 1) {
            first_bits_rating += "0";
          }
          else {
            if (rating_number == 0) {
              first_bits_rating += "0";
            }
            else {
              first_bits_rating += "1";
            }
          }
        }
        file.seekg(0, ios::beg);
      }
      if (rating_number == 0) {
        oxygen_generator_rating_in_bits = first_bits_rating;
      }
      else {
        co2_scrubber_rating_in_bits = first_bits_rating;
      }
    }
    // Binary to decimal
    unsigned short int base = 1;
    for (signed short int position = quantity_bits - 1; position >= 0; position--) {
      if (oxygen_generator_rating_in_bits[position] == '1') {
        oxygen_generator_rating += base;
      }
      if (co2_scrubber_rating_in_bits[position] == '1') {
        co2_scrubber_rating += base;
      }
      base = base * 2;
    }
    life_support_rating = oxygen_generator_rating * co2_scrubber_rating;
    cout << "Oxygen generator rating: " << oxygen_generator_rating << endl;
    cout << "CO2 scrubber rating: " << co2_scrubber_rating << endl;
    cout << "Life support rating: " << life_support_rating << endl;
    file.close();
  }
  else {
    cout << "Cannot open " << file_name << " file" << endl;
  }
  return 0;
}