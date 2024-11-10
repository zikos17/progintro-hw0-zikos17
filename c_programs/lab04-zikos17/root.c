#include <stdio.h>
#include <stdlib.h>

int main() {
    double a,b,c;
    srand(42);
    a=(1.0*rand())/RAND_MAX;
    b=((double)rand())/RAND_MAX;
    c=rand()/(double)RAND_MAX;

    printf("%lf\n",a);
    printf("%lf\n",b);
    printf("%lf\n,",c);
    return 0;
}
