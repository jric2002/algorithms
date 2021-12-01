#include <iostream>
/* Author: José Rodolfo (jric2002) */
using namespace std;
int main() {
  // Ordenamiento burbuja (bubble sort)
  int numbers[] = {5, 4, 3, 2, 1};
  int size_numbers = sizeof(numbers)/sizeof(int);
  int temp_number = 0;
  for (int i = 1; i < size_numbers; i++) {
    for (int j = 0; j < (size_numbers - i); j++) {
      if (numbers[j] > numbers[j + 1]) {
        temp_number = numbers[j + 1];
        numbers[j + 1] = numbers[j];
        numbers[j] = temp_number;
      }
    }
  }
  // Show numbers
  for (int i = 0; i < size_numbers; i++) {
    cout << numbers[i] << " ";
  }
  return 0;
}