#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[] = {8,4,5,7,3,6};
    int i, j, temp;
    int n = sizeof(arr)/sizeof(arr[0]);

    while (true) {
        bool sorted = true;

        for(i=0; i<n-1; i++){
            if(arr[i] > arr[i+1]){
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;

                sorted=false;
            }
        }
        if(sorted)
            break;
    }

    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}