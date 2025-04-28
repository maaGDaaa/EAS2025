#include <stdio.h>

int main(void) {
  float xr, yr, theta, x1, y1, x2, y2;
  float vx, vy, rx, ry , un, dn, vnx, vny;
  scanf("%f %f %f %f %f %f %f", &xr, &yr, &theta, &x1, &y1, &x2, &y2);
    vx = x2-x1;
    vy = y2-y1;
    rx = xr-x1;
    ry = yr-y1;
    vnx =  vy;
    vny = -vx;

    un = ((rx*vx) + (ry*vy) ) /  ((vx*vx) + (vy*vy) );
    dn = ((rx*vnx) + (ry*vny) ) /  ((vnx*vnx) + (vny*vny) );
    printf("dn = %.2f\n", dn);
    printf("un = %.2f", un);

    return 0;
}



/*
5 2 0 3 1 3 9           dn = 0.25  un = 0.12
5 2 45 3 1 3 9          dn = 0.25  un = 0.12
5 0 45 3 1 3 9          dn = 0.25 un = -0.12
5 14 0 3 1 3 9          dn = 0.25  un = 1.62
2.5 2 90 -1.5 0 4.5 7   dn = 0.19  un = 0.45
2.5 2 90 4.5 7 -1.5 0   dn = -0.19  un = 0.55
 */