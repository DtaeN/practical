#include "task.h"
#include <cstring>

// Функция пузырьковой сортировки
int *bubbleSort(int arr[], int n) {
  bool swapped;

  for (int i = 0; i < n - 1; i++) {
    swapped = false;

    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
        swapped = true;
      }
    }

    if (!swapped) {
      break;
    }
  }

  return arr;
}

// Функция для вывода массива
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void task5() {
  int size = 5;
  int arr[] = {12, 34, 2, 9, 10};

  printArray(arr, size);
  bubbleSort(arr, size);
  printArray(arr, size);
}
