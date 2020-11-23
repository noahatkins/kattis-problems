#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(void) {
  int h, v;
  double value;

  value = PI / 180;
  scanf("%d %d", &h, &v);
  printf("%.0f", ceil(h/sin(v*value)));
  return 0;
}