#include <stdio.h>
#include "functions.h"
//void birthday(int age);
int main(){
    printf("Happy birthday you are 15\n");
    printf("Happy birthday you are 18\n");
    birthday(15);
    birthday(18);
    float cubed = cube(5);
    printf("%g\n",cubed);
    //printf("%d\n",age); age undefined - scope
}
/*void birthday(int age){
    printf("Happy birthday you are %d\n",age);
}
*/
