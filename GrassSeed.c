#include <stdio.h>

int main(void) {
  float f, numLawns, i, l, w, sum = 0, cost;
  scanf("%f", &cost);
  scanf("%f", &numLawns);
  for(i = 0; i < numLawns; i++) {
    scanf("%f %f", &l, &w);
    sum += l * w;
  }
  printf("%.6f", sum * cost );
  return 0;
}