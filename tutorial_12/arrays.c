#include <stdio.h>
int main(){
    float number[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
    number[4] = 14.0;
    int i;  
    for (i = 0; i < (sizeof number / sizeof number[0]); i++ ) {
        printf("Element[%d] = %g\n", i, number[i] );
    }
    int n[10];      
    for ( i = 0; i < 10; i++ ) {
        n[ i ] = i + 100;
        printf("Element[%d] = %d\n", i, n[i] );
    }
    return 0;
}