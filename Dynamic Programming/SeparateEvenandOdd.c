#include <stdio.h>

int main(){
    int num;
    printf("Enter the number of elements: ");
    scanf("%d",&num);
    int arr[num],temp[num];
    int countEven=0;
    int countOdd=0;
    int j=0;
    int k=0;

    for(int i=0; i < num; i++){
        printf("Element #%d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    
    for(int i=0; i < num; i++){
        if(arr[i]%2==0){
            countEven++;
        }else{
            countOdd++;
        }
    }
    
    int arrEven[countEven],arrOdd[countOdd];

    for(int i=0; i<num; i++){
        if(arr[i]%2==0){
            arrEven[j] = arr[i];
            j++;
        }else{
            arrOdd[k] = arr[i];
            k++;
        }
    }

    for(int i=0; i<countEven; i++){
        temp[i] = arrEven[i];
    }

    for(int i=countEven; i<num; i++){
        temp[i] = arrOdd[i-countEven];
    }
    
    printf("\nArranged Elements:\n");
    for(int i=0; i<num; i++){
       printf("Element #%d: %d\n",i+1,temp[i]); 
    }
    return 0;
}