#include <stdio.h>

int main(void) {
  int i, max = 0, m1, m2, m3, m4, sum, student = 0;
  for(i = 0; i < 5; i++) {
    sum = 0;
    scanf("%d %d %d %d", &m1, &m2, &m3, &m4);
    sum = m1 + m2 + m3 + m4;
    if (sum > max) {
      student = i + 1;
      max = sum;
    }
  }
  printf("%d %d", student, max);
  return 0;
}