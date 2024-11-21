#include "task.h"
#include <ostream>

void task4() {
  short s = 32767;
  int i = 2147483647;
  long l = 9223372036854775807;

  cout << "Short: " << s << endl;
  cout << "Int: " << i << endl;
  cout << "Long: " << l << endl;
}
