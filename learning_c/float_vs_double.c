#include <stdio.h>
int main(void) {
  float a_float = 0.45;
  float b_float = 8.0;
  double a_double = 0.45;
  double b_double = 8.0;
  printf("float+float, 8.0 + 0.45, 20dp : %10.20f\n", a_float+b_float);
  printf("dobule+double,  8.0 + 0.45, 20dp : %10.20f\n", a_double+b_double);
  return 0;
}
