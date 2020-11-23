#include <stdio.h>

int main(void) {
  int n, i, x, min = 1000000, day;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d", &x);
    if (x < min) {
      min = x;
      day = i;
    }
  }
  printf("%d", day);
  return 0;
}