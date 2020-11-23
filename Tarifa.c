#include <stdio.h>

int main(void) {
  int mb, months, i, leftover = 0, mbUsage;
  scanf("%d", &mb);
  scanf("%d", &months);

  for(i = 0; i < months; i++) {
    scanf("%d", &mbUsage);
    leftover += mb - mbUsage;
  }
  printf("%d", leftover+mb);
  return 0;
}