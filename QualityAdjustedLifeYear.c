#include <stdio.h>

int main(void) {
  int cases, i;
  float qaly = 0.0, q, y;

  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%f %f", &q, &y);
    qaly += q * y;
  }
  printf("%.3f", qaly);
  return 0;
}