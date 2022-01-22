#include <stdio.h>

int main(){

    int a;
    a = 5;
    int b = 4;
    int sum = a + b;
    float decimal = 5.4;
    double another_decimal = 5.4;
    int sum_int_and_float = a + decimal;
    char letter = 'a';
    //char name[] = "Jonathan";
    //char name[8] = "Jonathan";
    char name[9] = "Jonathan";

    printf("The value of a is %d.\n", a);
    printf("The value of the sum is %d.\n", sum);
    printf("The value of the float and double are %f and %lf.\n", decimal, another_decimal);
    printf("The value of the float and double are %g and %g.\n", decimal, another_decimal);
    printf("The sum of the int a and float decimal is : %f\n", (a+decimal));
    printf("The sum of the int a and float decimal is : %d\n", sum_int_and_float);
    printf("The letter is %c. Your name is %s.\n", letter,name);
    return 0;
}