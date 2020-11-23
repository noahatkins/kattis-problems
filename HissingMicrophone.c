#include <stdio.h>
#include <string.h>

int main(void) {
  char str[1000];
  scanf("%s", str);
  if (strstr(str,"ss") == NULL) {
    printf("no hiss");
  } else {
    printf("hiss");
  }
 
  return 0;
}