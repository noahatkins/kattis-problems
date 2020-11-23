#include <stdio.h>

int main(void) {
  char sentence[500];
  int i, count, flag;
 
  while(gets(sentence) != EOF) {
    count = 0;
    flag = 0;
    for(i = 0; sentence[i]; i++) {
      if((sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= 'a' && sentence[i] <= 'z')) {
        flag = 1;
      } else {
        count+= flag;
        flag = 0;
      }
    }
    count += flag;
    printf("%d", count);
  }
  return 0;
}