#include <stdio.h>
#include <string.h>
int main(){
    char greeting[] = "Hello";
    //char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    int num_words = 2;
    int num_char = 6;
    char sentance[num_words][num_char];
    strlcpy(sentance[0], "Hello",num_char);
    strlcpy(sentance[1], "World",num_char);
    const char *strings[] = {"one","two","three"};
    //* is num_char  [] is num_words
    for(int i = 0; i < num_words; i++){
        for(int j = 0; j < num_char; j++){
            printf("%c",sentance[i][j]);
        }
        printf("\n");
    }
    return  0;
}
