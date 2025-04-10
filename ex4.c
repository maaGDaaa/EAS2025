#include <stdio.h>

int main() {
    float x1, x2, xr, y1, y2, yr;
    float vx, vy, rx, ry , un;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    scanf("%f %f", &xr, &yr);


    vx = x2-x1;
    vy = y2-y1;
    rx = xr-x1;
    ry = yr-y1;
    un = ((rx*vx) + (ry*vy) )/ ((vx*vx) + (vy*vy) );

    //printf("%f\n", un);

    if (un<0) {
        printf("previous");
    }
    else if (un>=0 && un<1) {
        printf("inside");
    }
    else if (un>1) {
        printf("next");
    }


}

/*
1.5 2 4.5 2 0 3   previous
1.5 2 4.5 2 5 0   next
1.5 2 4.5 2 2 8   inside
3 4 6 6 7 4       inside
3 4 6 6 7 5       next
3 4 6 6 3 0       previous
 */