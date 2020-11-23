#include <stdio.h>

int main(void) {
  int n, p, i;
  char str[100];
  scanf("%d %d", &n, &p);

  for (i = 0; i < n; i++) {
    scanf("%s", str);
  }
  printf("%d", p);
  return 0;
}