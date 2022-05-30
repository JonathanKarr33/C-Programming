#include <stdio.h>
int main(){
    int number = 25;
    int number2 = 50;
    printf("Number: %d is at address %p\n",number,&number);
    printf("Number2: %d is at address %p\n",number2,&number2);
    int favorite_number;
    printf("Enter your favorite number: ");
    scanf("%d",&favorite_number);
    int resassign = 1;
    for(int i = 0; i < 5; i++){
        resassign = resassign + i;
        printf("Reassign: %d is at address %p\n",resassign,&resassign);
    }
    int *ptr = &resassign;
    printf("%p is the number %d\n",ptr,*ptr);
    return 0;
}