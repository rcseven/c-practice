#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max(int x, int y) {
    return x > y ? x : y;
}

int max_of_four(int a, int b, int c, int d) {
    int highNumber = max(a, b);
    highNumber = max(highNumber,c);
    highNumber = max(highNumber,d);
    
    return highNumber;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}