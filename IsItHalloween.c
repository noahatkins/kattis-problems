#include <stdio.h>
#include <string.h>

int main(void) {
  char day[10];
  fgets(day, 10, stdin);
  if (strncmp(day,"OCT 31",6) == 0 || strncmp(day,"DEC 25",6) == 0) {
    printf("yup");
  } else {
    printf("nope");
  }
 
  return 0;
}