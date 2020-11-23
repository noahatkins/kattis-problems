#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
  int arr[4], i, j;
  scanf("%d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3]);
  qsort(arr, 5, sizeof(int), cmpfunc);
  printf("%d", arr[0] * arr[2]);
  return 0;
}

