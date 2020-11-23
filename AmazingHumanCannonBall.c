#include <stdio.h>
#include <math.h>

int main(void) {
  int cases, i;
  float v, ang, x1, h1, h2, xt, yt, time;
  scanf("%d", &cases);
  for (i = 0; i < cases; i++) {
    scanf("%f %f %f %f %f", &v, &ang, &x1, &h1, &h2);
    time = x1/(v*cos(ang*(3.14/180)));
    yt = (v*time)*sin(ang*(3.14/180))-(0.5*9.81*(time*time));
    if(yt >= h1+1 && yt <= h2-1) {
      printf("Safe\n");
    } else{
      printf("Not Safe\n");
    }
  }
  return 0;
}