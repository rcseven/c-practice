// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
   char name[10];
   scanf("%s", name);
   int stringlen;
   char ch;
   
   for(int i = 0; name[i] != '\0'; i++){
        ch = name[i];
        stringlen+=1;
   }
    
    printf("%d", stringlen);
    return 0;
}