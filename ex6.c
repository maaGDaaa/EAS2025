#include <stdio.h>
#include <math.h>


int main(void) {

    float xr,yr,theta, xt , yt , x , y;
    float X , Y , Vl , Vr , r ;
    scanf("%f %f %f %f %f", &xr, &yr, &theta, &xt, &yt);
    x = xt - xr;
    y = yt - yr;
    X = x*cos(theta* M_PI/180) + y*sin(theta* M_PI/180);
    Y = y*cos(theta* M_PI/180) - x*sin(theta* M_PI/180);

    r = (X*X + Y*Y) / (2*Y) ;
    if (X==0) {
        Vl = (Y > 0) ? 1.5 : -1.5;
    }
    else {
        Vl = 1.5 * ((X > 0) - (X < 0));
    }

    Vr = Vl*(r+0.5)/r;
    printf("Vl=%.1f, Vr=%.1f", Vl , Vr);


    return 0;
}
/*
0 0 0 3 3                Vl=1.5, Vr=1.8
2 0 0 2 6                Vl=1.5, Vr=1.8
2 0 135 2 6              Vl=1.5, Vr=1.3
2 3 30 -2.5 4            Vl=-1.5, Vr=-1.7
-7.5 2.5 -90 0 -1.5      Vl=1.5, Vr=1.7
-3 -1 -45 1 3            Vl=1.5, Vr=1.8
 */