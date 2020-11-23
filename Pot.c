#include <stdio.h>
#include <math.h>

int main(void) {
  int cases, num, i, lastDig, task = 0;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%d", &num);
    lastDig = num % 10;
    num/=10;
    task += pow(num, lastDig);
  }
  printf("%d", task);
  return 0;
}