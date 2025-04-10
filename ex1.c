#include <stdio.h>
#include <math.h>

int main() {

   int v1,v2,v3,v4,angle;
   float X,Y,angle_rad; 

   scanf("%d %d %d %d", &v1 , &v2 , &v3 , &v4);

   X=(v1-v2-v3+v4);
   Y=(v1+v2+v3+v4);

   angle_rad = atan2(Y,X) * (180 / M_PI) ;
   angle = (int)angle_rad;

   printf ("%d", angle);
   
   return 0;
}