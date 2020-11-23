#include <stdio.h>

int main(void) {
  int v, h, n;
  scanf("%d %d %d", &n, &h, &v); 
  if (n - v > v) {
   v = n - v;
  }
  if (n - h > h) {
   h = n - h;
  }
  printf("%d", 4 * v * h);
  return 0;
}