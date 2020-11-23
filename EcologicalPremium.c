#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int cases, farmers, area, premium, animals, sum, i, j;
  while(scanf("%d", &cases) != EOF) {
    for (i=0; i < cases; i++) {
      sum = 0;
      scanf("%d", &farmers);
      for (j = 0; j < farmers; j++) {
        scanf("%d %d %d", &area, &animals, &premium);
        sum += area * premium;
      }
      printf("%d\n", sum);
    }   
  }
  return 0;
}