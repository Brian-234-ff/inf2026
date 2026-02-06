#include <stdio.h>

int main() {
  int year = 2026;
  int month = 2;

  int salary = 100'001;
  int capital = 0;

  while (!(year == 2027 && month == 2)) {
    if (month == 3) {
      salary = (salary * 1.5);
    }

    int foo = 10;
    int *foo_ptr = &foo;
    int bar = *foo_ptr;
    *foo_ptr = 100500;
    foo = 100500;

    capital += salary;

    ++month;
    if (month == 13) {
      ++year;
      month = 1;
    }
  }

  printf("Capital = %d\n", capital);
  printf("Salary = %d\n", salary);

  return 0;
}
