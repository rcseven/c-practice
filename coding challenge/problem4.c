#include<stdio.h>

int main() {

    int B, N, M; 
    int sum=0;
    
    scanf("%d", &B);
    scanf("%d %d", &N, &M);

    int b_i[B];
    if(B > 0 && B <= 15) {
        for (int i=0; i < B; i++) {
            scanf("%d", &b_i[i]);
            sum += b_i[i];
        }
    }else{
        printf("No");
        return 0;
    }

    if(N*M == sum) {
        for(int i=0; i < B; i++){
            if (b_i[i] >= N || b_i[i] >= M) {
                if(!(b_i[i] % N == 0 || b_i[i] % M == 0)){
                    printf("No");
                    return 0;
                }
            }
        }
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}