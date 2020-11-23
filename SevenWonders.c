#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
  int i, g = 0, c = 0, t = 0, min;
  char str[49];
  scanf("%s", str);
  for(i = 0; i < strlen(str); i++) {
    if(str[i] == 'G') {
      g++;
    } else if(str[i] == 'T') {
      t++;
    } else {
      c++;
    }
  }
  if(c > t) {
    min = t;
  } else {
    min = c;
  }
  if (min > g) {
    min = g;
  }
  printf("%.0f", pow(c,2) + pow(g,2) + pow(t,2) + (min*7));
}