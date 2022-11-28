#include<stdio.h>
#include<string.h>

int main() {
    char name[10];
    scanf("%s", name);
    int length = strlen(name);

    for (int i = 0; i <= length; i++) {
        printf("%c", name[length-i]);
    }
    
}