#include <stdio.h>
#include <string.h>

int main() {
    char s[101]; 
    int counts[4] = {0};  
    scanf("%s", s);
    
    for (int i = 0; s[i]; i++) {
        counts[s[i] - '0']++;
    }

    for (int i = 1; i <= 3; i++) { 
        for (int j = 0; j < counts[i]; j++) {
            if (j > 0 || (i > 1 && counts[i-1] > 0)) {
                printf("+");  
            }
            printf("%d", i);
        }
    }

    printf("\n");  
    return 0;  
}
