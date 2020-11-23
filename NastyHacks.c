#include <stdio.h>

int main(void) {
  int cases, i, r, e, c;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%d %d %d", &r, &e, &c);
    if (r == e - c) {
      printf("does not matter\n");
    } else if (r > e - c) {
      printf("do not advertise\n");
    } else {
      printf("advertise\n");
    }
  } 
  return 0;
}