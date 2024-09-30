#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[5][5];
    int one_row, one_col;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 1) {
                one_row = i + 1; 
                one_col = j + 1; 
            }
        }
    }

    int moves = abs(3 - one_row) + abs(3 - one_col);

    printf("%d\n", moves);
    
    return 0;
}
