#include <stdio.h>

int main(void) {
  int h, m, x;
  scanf("%d %d", &h, &m);
  x = m - 45;
  if (x < 0) {
    h -= 1;
    x = 60 + x;
  }
  if (h < 0) {
    h = 23;
  }
  printf("%d %d", h , x);
  return 0;
}