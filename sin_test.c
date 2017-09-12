// sin_test.c

#include <stdio.h>
#include <math.h>

int main() {
  double d = M_PI;
  int ii;
  for (ii=0; ii<100; ii++) {
    double x = 10.0 * sin(d/ii);
    printf("x=%lf\n", x);
  }
  return(0);
}
