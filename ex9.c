#include <stdio.h>
#include <math.h>

int main(void) {
  float xt , zt, theta_t, theta_s , diff;
  int N;
   scanf("%f %f %d", &xt, &zt, &N);
   theta_t = atan2(zt, xt) * (180.0 / M_PI);\

     if (theta_t < 0)
      theta_t += 360.0;

      //printf("theta_t = %f\n", theta_t);

     for (int i = 0; i < N; i++) {
      theta_s = (360.0 * i ) / N ;
      diff = fabs(theta_s - theta_t);
      //printf("theta_t = %f\n", theta_t);
      if (diff > 180.0)
       diff = 360.0 - diff;

      if (diff < 60.0)
       printf("%d\n", i);

     }
    return 0;
}