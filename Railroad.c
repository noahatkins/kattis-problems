#include <stdio.h>

int main(void) {
  int j, s;
  scanf("%d %d", &j, &s);
  if(s % 2 == 0) {
    printf("possible");
  } else {
    printf("impossible");
  }
  return 0;
}