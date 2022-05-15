#include <stdio.h>

int main(){
    int items;
    printf("Enter the number of items: ");
    scanf("%d",&items);
    switch (items)
    {
    case 0:
        printf("You don't have any items.\n");
        break;
    case 1:
        printf("You have one item.\n");
        break;;
    case 2:
        printf("You have two items.\n");
        break;
    default:
        printf("You have more than two items.\n");
        break;
    }
    return 0;
}