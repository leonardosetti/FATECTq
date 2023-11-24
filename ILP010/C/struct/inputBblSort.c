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

void get_array(int *array, int length) {
  for (int i = 0; i < length; i++) {
    printf("Digite o elemento %d: ", i + 1);
    scanf("%d", &array[i]);
  }
}

int main() {
  int length;

  printf("Digite o tamanho do array: ");
  scanf("%d", &length);

  int array[length];

  get_array(array, length);

  bubble_sort(array, length);

  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");

  return 0;
}
