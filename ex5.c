#include <math.h>
#include <stdio.h>

int main(void) {
    float xr,yr,theta, xt , yt , x , y;
    float X, Y;
    scanf("%f %f %f %f %f", &xr, &yr, &theta, &xt, &yt);
    x = xt - xr;
    y = yt - yr;
    //y = -y;
    X= x*cos(theta* M_PI/180) + y*sin(theta* M_PI/180);
    Y= y*cos(theta* M_PI/180) - x*sin(theta* M_PI/180);

    printf ("%.1f , %.1f" , X , Y);

    return 0;
}

/*
0 0 0 3 3             3.0 , 3.0
2 0 0 2 6             0.0 , 6.0
2 0 135 2 6           4.2 , -4.2
2 3 30 -2.5 4        -3.4 , 3.1
-7.5 2.5 -90 0 -1.5   4.0 , 7.5
-3 -1 -45 1 3         0.0 , 5.7
*/
