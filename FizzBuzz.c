#include <stdio.h>

int main(void) {
  int x, y, z, i;
  scanf("%d %d %d", &x, &y, &z);
  for(i = 1; i <= z; i++) {
    if (i % x == 0 && i  % y == 0 ) {
      printf("FizzBuzz\n");
    } else if(i % x == 0 ) {
      printf("Fizz\n");
    } else if(i % y == 0) {
      printf("Buzz\n");
    } else {
      printf("%d\n", i);
    }
  }
  return 0;
}