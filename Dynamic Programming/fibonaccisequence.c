#include <stdio.h>

int main() {
    int current = 1;
    int prev = 0;
    int n;
    int sum = 0;

    scanf("%d", &n);

    for (int i = 0; i < n-2; i++) {
        int next = current + prev;
    
        prev = current;
        sum += current;
        current = next;
    }
    sum += current;

    printf("The nth term of the fib seq is = %d", current);
    printf("\nThe sum of the fib series is = %d", sum);
    
    return 0;
}