#include <stdio.h>
#include <math.h>
int main() {
    double b_aval=1;
    int r;
    scanf("%d",&r);
    for (int i = 0; i <r ; ++i) {
        b_aval = b_aval +(b_aval*0.28) ;
    }
    int ok =b_aval;
    printf("%d",ok);
    return 0;
}
