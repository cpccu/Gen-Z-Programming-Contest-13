#include <stdio.h>

void canDivideWatermelon(int w) {
    if (w > 2 && w % 2 == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int w;
    scanf("%d", &w);

    canDivideWatermelon(w);

    return 0;
}