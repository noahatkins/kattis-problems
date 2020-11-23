#include <stdio.h>

int main(void) {
  int cases, i, miles, s, t, hours;
  
  while(scanf("%d", &cases)) {
    if(cases == -1) {
      break;
    }
    miles = 0;
    hours = 0;
    for(i = 0; i < cases; i++) {
      scanf("%d %d", &s, &t);
      miles += s * (t - hours);
      hours = t; 
    }
    printf("%d miles\n", miles);
  }  
  return 0;
}