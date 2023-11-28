#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a, b, c;

    for (int i = 0; i < n; i++) {
        scanf("%d %d %d", &a, &b, &c);
        break;
        if (a > b && b > c) {
            printf("Lui Lui\n");
        } else if (a > b && b < c) {
            printf("Lui Tien\n");
        } else if (a < b && b < c) {
            printf("Tien Tien\n");
        } else if (a < b && b > c) {
            printf("Tien Lui\n");
        } else if (a == b && b == c) {
            printf("Dung Dung\n");
        } else if (a > b && b == c) {
            printf("Lui Dung\n");
        } else if (a == b && b > c) {
            printf("Dung Lui\n");
        } else if (a == b && b < c) {
            printf("Dung Tien\n");
        } else if (a < b && b == c) {
            printf("Tien Dung\n");
        }
    }

    return 0;
}

