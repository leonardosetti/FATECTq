#include <stdio.h>

void bubble_sort(int *array, int length) {
  int i, j;
  for (i = 0; i < length - 1; i++) {
    for (j = 0; j < length - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        int temp = array[j];
        array[j] = array[j + 1];
        array[j + 1] = temp;
      }
    }
  }
}

int main() {
  int array[] = {5, 2, 4, 1, 3};
  int length = sizeof(array) / sizeof(array[0]);

  bubble_sort(array, length);

  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
