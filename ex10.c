#include <stdio.h>
#include <math.h>

//#define r 0.5;

int main(void) {

    double so, sl, sr, sf , beta, r= 0.5, y , x , z ;
    scanf("%lf %lf %lf %lf", &so, &sl, &sr, &sf);

    beta = (2*r*r) / ( (pow(sr,-2.0/3.0)) + (pow(sl,-2.0/3.0)) - (2*pow(so,-2.0/3.0)) );

    y = (r*r -  beta * ( (1/sf) - (1/so)) ) / (2*r);
    x = (beta*((1/sf - 1/sr)) + 2*r*y) / (2*r);
    z = sqrt( (beta/pow(so,2.0/3.0)) - (x*x) - (y*y) );

    if ( isnan(x) || isnan(y) || isnan(z) ) {
        printf("Wrong Input");
    } else {
        printf("(%.2f, %.2f, %.2f)", x , y , z );
    }



}
//
// 4.2 3.5 3.9 2.4    (0.12, -1.04, 1.30)
// 5.2 5.4 3.8 2.7    (-0.26, -1.04, 1.12)
// 2.2 5.8 6.9 6.7     Wrong Input
// 4.9 2.1 6.2 2.7    (0.35, -0.14, 0.82)
// 9.0 5.9 6.3 2.6    (0.08, -0.75, 0.53)
// 8.2 3.0 6.2 2.3    (0.18, -0.30, 0.56)
// 1.5 7.0 1.3 2.6     Wrong Input
