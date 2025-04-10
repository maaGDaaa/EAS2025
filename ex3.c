#include <stdio.h>
#include <math.h>

int main(void) {
    int N;
    double theta, v, t;
    float x=0.0 , y=0.0 , newtheta=0.0;
    scanf("%d" , &N);
     for (int i = 1; i <= N; i++)
         {
         scanf("%lf %lf %lf", &theta , &v , &t );
         newtheta = newtheta + theta;
         x += (v*t)*cos(newtheta* M_PI/180);
         y +=  (v*t)*sin(newtheta* M_PI/180);
         printf("%.1f %.1f %.1f\n" , x, y, newtheta);
     }

    return 0;
}

