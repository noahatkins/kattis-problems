#include <stdio.h>

int main(void) {
  int num1, num2, lowest, highest, max, cycle, x, i;
  while(scanf("%d %d", &num1, &num2) != EOF) {
    max = 0;
    if (num1 > num2) {
      lowest = num2;
      highest = num1;
    } else {
      lowest = num1;
      highest = num2;
    }
    for(i = lowest; i < highest+1; i++) {
      cycle = 1;
 
      x = i;
      while(x != 1) {
        cycle++;
        if (x % 2 == 0 ) {
          x = x / 2;
        } else {
          x = (3*x) + 1;
        }
      }
      if(cycle > max) {
        max = cycle;
      }   
    }
    printf("%d %d %d\n", num1, num2, max);
  }
  return 0;
}