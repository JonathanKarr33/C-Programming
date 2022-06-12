#include <stdio.h>

int main(){
    int a  = 7; // 0000 0111
    int b = 6; // 0000 0110
    printf("and %d\n", a & b);
    printf("or %d\n", a | b);
    printf("xor %d\n", a ^ b);
    printf("not %d\n", ~a);
    printf("shift left %d\n", a << 1);
    printf("shift right %d\n", a >> 1);
    return 0;
}
