#include <stdio.h>
void birthday(int age);
float cube(float num);
void birthday(int age){
    printf("Happy birthday you are %d\n",age);
}
float cube(float num){
    float result = num * num * num;
    return result;
}