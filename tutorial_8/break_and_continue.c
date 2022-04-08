#include <stdio.h>
int main(){
    int i;
    for(i = 0; i < 5; i++){
        if (i == 3){
            continue;
        }
        printf("%d\n",i);
    }
    printf("You are finished with the loop!\n");
}