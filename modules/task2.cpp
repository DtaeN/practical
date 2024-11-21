#include "task.h"

void task2() {
  int a = 5;
  int b = 10;

  int minValue = (a < b) ? a : b;
  int maxValue = (a > b) ? a : b;

  cout << "минимальное = " << minValue << ",максимальное = " << maxValue
       << endl;
}
