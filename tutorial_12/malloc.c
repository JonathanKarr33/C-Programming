#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = 10, i, *ptr, sum = 0;
    ptr = (int*) malloc(n * sizeof(int));
    printf("Enter elements: ");
    for(i = 0; i < n; ++i) {
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d\n", sum);
    free(ptr);
    return 0;
}