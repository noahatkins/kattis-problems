#include <stdio.h>
#include <math.h>

int main(void) {
  int iter, i, n=2;
  scanf("%d", &iter);
  for(i = 0; i < iter; i++) {
     n = n * 2 - 1;
  }
  printf("%d", n*n);
  return 0;
}