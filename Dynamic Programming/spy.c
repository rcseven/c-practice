#include <stdio.h>
#define MAX 20

int freq(int a[][20],int n, int n2) {
     int i,j,k,c=0,num;
     int x, y,visited[n][n2];
     for(i=0;i<n;i++) {
       for(j=0; j<n2;j++) {
          c=1;
          num=a[i][j];
          if(visited[i][j]!=1) {
          for(x=0;x<n;x++) {
            for(y=0;y<n2;y++) {
              if((i==x)&&(j==y)) {
                continue;
              }
              if(a[i][j]==a[x][y]) {
                visited[x][y]=1;
                c++;
              }
            }
          }
          if(c==1){
            return 1;
          }
          }
       }
     }
}

int main() {
    int arr[MAX][MAX],x,y,i,j;
    printf("Enter the number of rows: ");
    scanf("%d", &x);
    printf("Enter the number of columns: ");
    scanf("%d", &y);
    

    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    if(freq(arr,x,y) == 1){
        printf("SPY");
    }else{
        printf("NONE");
    }
    
    return 0;
}