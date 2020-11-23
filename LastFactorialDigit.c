#include <stdio.h>

int main(void) {
  int cases, digit, lastDigit, i, j, fact;
  scanf("%d", &cases);
  for(i = 0; i < cases; i++) {
    fact = 1;
    scanf("%d", &digit);
    for (j = 1; j <= digit; j++) {
      fact *= j;
    }
    if(fact/10 < 1) {
      printf("%d\n", fact);
    } else {
      printf("%d\n", (fact % 10));
    }
  }
  return 0;
}