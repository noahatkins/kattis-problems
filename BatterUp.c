#include <stdio.h>

int main(void) {
  int nums, x, sum = 0, i;
  float count;
  scanf("%d", &nums);
  for(i = 0; i < nums; i++) {
    scanf("%d", &x);
    if(x >= 0) {
      sum += x;
      count++;
    }
  }
  printf("%f", sum / count);
  return 0;
}