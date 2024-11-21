#include "task.h"

class Student {
public:
  string name;
  int age;
  int estimation;

  Student(string n, int a, int g) : name(n), age(a), estimation(g) {}

  void printInfo() {
    cout << "Имя: " << name << ", Возраст: " << age
         << ", Оценка: " << estimation << endl;
  }
};

void task6() {
  Student student("Вася", 18, 5);
  student.printInfo();
}
