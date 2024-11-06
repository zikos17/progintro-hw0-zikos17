#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    double a,b,c;
    srand(time(NULL));
    a=(1.0*rand())/RAND_MAX;
    b=((double)rand())/RAND_MAX;
    c=rand()/(double)RAND_MAX;
   double det=b*b - 4*a*c ;
    if (det>0) {
    double x1 = (-b + sqrt(det))/ (2*a);
    double x2 = (-b - sqrt(det))/(2*a);
    printf("x1: %lf x2: %lf\n",x1 ,x2);
     } else if (!(det==0)){
        double x= -b /(2*a);
        printf("double root: %lf\n", x);
     }

    printf("%lf\n",a);
    printf("%lf\n",b);
    printf("%lf\n,",c);
    return 0;
}