#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846

int main(){
    double Rx, Ry, theta, Gx, Gy, d, new_theta;

    scanf("%lf %lf %lf %lf %lf", &Rx, &Ry, &theta, &Gx, &Gy);

    d = sqrt((Rx - Gx) * (Rx - Gx) + (Ry - Gy) * (Ry - Gy));
    new_theta = atan2(Gy - Ry, Gx - Rx) * (180 / PI) - theta;

    printf("%.1lf %.1lf\n", d, new_theta);

    return 0;
}