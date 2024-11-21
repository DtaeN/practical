#include "main.h"

int main(void) {
  int choice;

  while (true) {
    cout << "введите номер задачи (0 для выхода): ";
    cin >> choice;

    switch (choice) {
    case 1:
      task1();
      break;
    case 2:
      task2();
      break;
    case 3:
      task3();
      break;
    case 4:
      task4();
      break;
    case 5:
      task5();
      break;
    case 6:
      task6();
      break;
    case 0:
      return 0;
    default:
      cout << "не корректный номер задачи" << endl;
      break;
    }
  }
  return 0;
}
