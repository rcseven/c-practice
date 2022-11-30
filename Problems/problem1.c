#include<stdio.h>

int main() {
    int n;
    int v_i;
    int d_i;

    scanf("%d", &n);
    float temp=0;
    float island[n];
    float bestIslandValue=0;
    int bestIsland;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &v_i, &d_i);
        island[i] = v_i/d_i;
        if(island[i] > bestIslandValue) {
            bestIslandValue = island[i];
            bestIsland= i+1;
        }
        // printf("island index=%d | island value=%f | best Island index =%d best island val=%f | \n", i, island[i], bestIsland, bestIslandValue);
    }
    
    printf("%d", bestIsland);

    return 0;
}