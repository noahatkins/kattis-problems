#include <stdio.h>
#include <stdlib.h>

int main(void) {
  long long int i, j;
  while(scanf("%lld %lld", &i, &j) != EOF) {
    if(i > j) {
      printf("%lld\n", i - j);
    } else {
      printf("%lld\n", j - i);
    }
  }
  return 0;
}