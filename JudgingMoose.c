#include <stdio.h>

int main(void) {
  int l, r, n; 
  scanf("%d %d", &l, &r);
  if(l == r && l != 0) {
    printf("Even %d", l + r);
  } else if (l == 0 && r == 0) {
    printf("Not a moose");
  } else {
    if ( l > r) { printf("Odd %d", l * 2); }
    else { printf("Odd %d", r * 2); }
  }
  return 0;
}