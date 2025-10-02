#include <stdio.h>

int main() {
    int n = 6;
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" ");
            } else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}
