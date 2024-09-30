#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    int count1 = 0, count2 = 0, count3 = 0;

    scanf("%s", s);
    
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }

    int first = 1;
    for (int i = 0; i < count1; i++) {
        if (!first) printf("+");
        printf("1");
        first = 0;
    }
    for (int i = 0; i < count2; i++) {
        if (!first) printf("+");
        printf("2");
        first = 0;
    }
    for (int i = 0; i < count3; i++) {
        if (!first) printf("+");
        printf("3");
        first = 0;
    }

    printf("\n");
    return 0;
}
