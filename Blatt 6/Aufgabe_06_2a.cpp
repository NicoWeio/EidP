#include "Aufgabe_06_2a.h"

void bubblesort(int array[], unsigned int const start, unsigned int const end) {
  if (start < end - 1) {
    if (array[start] > array[start + 1]) {
      swap(array[start], array[start + 1]);
      bubblesort(array, 0, end);
    } else {
      bubblesort(array, start + 1, end);
    }
  }
}
