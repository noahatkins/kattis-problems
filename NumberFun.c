#include <stdio.h>

int main(void) {
  int i, cases;
  float a, b, c;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    scanf("%f %f %f", &a, &b, &c);
    if(a + b == c || a * b == c || a / b == c || b / a == c || a - b == c || b - a == c) {
      printf("Possible\n");
    } else {
      printf("Impossible\n");
    }
  }
  return 0;
}