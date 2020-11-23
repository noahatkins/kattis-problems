#include <stdio.h>

int main(void) {
  int g, s, c, bp;
  scanf("%d %d %d", &g, &s, &c);
  bp = g*3 + s*2 + c*1;
  if(bp < 2) {
    printf("Copper");
  } else if (bp == 2) {
    printf("Estate or Copper");
  } else if (bp < 5) {
    printf("Estate or Silver");
  } else if (bp == 5) {
    printf("Duchy or Silver");
  } else if(bp < 8) {
    printf("Duchy or Gold");
  } else {
    printf("Province or Gold");
  }
  return 0;
}