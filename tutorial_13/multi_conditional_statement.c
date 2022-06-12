#include <stdio.h>

int main(){
    int total = 745;
    int people = 316;
    if((total > 500) && (people > 250)){
        printf("there is a high total and lot of people\n");
    }
    if((total > 500) || (people > 250)){
        printf("there is a high total or lot of people\n");
    }
    if(!(total > 500)){
        printf("there are not lot of people\n");
    }
    return 0;
}