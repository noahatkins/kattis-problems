#include <stdio.h>

int main(void) {
  int cases, i, ex, sum = 0; 
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%d", &ex);
    if (ex < 0) {
      sum += ex;
    }
  }
  printf("%d", sum * -1);
  return 0;
}