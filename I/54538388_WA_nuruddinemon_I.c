#include <stdio.h>
#include <ctype.h>

int main() {
    char word[104]; 

    scanf("%103s", word); 

    word[0] = toupper(word[0]);

    printf("%s\n", word);

    return 0;  
}
