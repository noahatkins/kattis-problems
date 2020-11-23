#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  char s[2] = "-";
  char *token;
  scanf("%s", str);
  token = strtok(str, s);
  while (token != NULL) {
  printf("%c", token[0]);
  token = strtok(NULL, s);
  }
  return 0;
}