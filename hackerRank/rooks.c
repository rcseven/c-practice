#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for(int i=0; i<T; i++){
        int x1, x2, y1, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        if(x1 == x2 || y1 == y2)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}