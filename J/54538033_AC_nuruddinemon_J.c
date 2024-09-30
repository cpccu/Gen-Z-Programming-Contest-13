#include <stdio.h>
#include <string.h>

int main() {
    char username[101]; 
    int distinct[26] = {0}; 
    int count = 0; 
   
    scanf("%s", username);

 
    for (int i = 0; i < strlen(username); i++) {
        if (distinct[username[i] - 'a'] == 0) {
            distinct[username[i] - 'a'] = 1; 
            count++;  
        }
    }

    if (count % 2 == 0) {
        printf("CHAT WITH HER!\n"); 
    } else {
        printf("IGNORE HIM!\n");  
    }

    return 0; 
}
