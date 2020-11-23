#include <stdio.h>
#include <string.h>

int main(void) {
  int ans = 1, i;
  char str[100];
  scanf("%s", str);
  for( i = 0; i < strlen(str); i++) {
    if(str[i] == 'A') {
      if(ans == 1) {
        ans = 2;
      } else if(ans == 2){
        ans = 1;
      }
    } else if (str[i] == 'B') {
      if (ans == 3) {
        ans = 2;
      } else if (ans == 2){
        ans = 3;
      }
    } else {
      if (ans == 1) {
        ans = 3;
      } else if(ans == 3){
        ans = 1;
      }
    }
  }
  printf("%d", ans);
  return 0;
}