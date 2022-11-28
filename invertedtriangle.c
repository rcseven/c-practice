#include<stdio.h>

int main() {
    int size;
    printf("triangle size: ");
    scanf("%d", &size);

    for (int i = 1; i <= size; i++) {
        for (int j = size-i; j >= 0; j--) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}