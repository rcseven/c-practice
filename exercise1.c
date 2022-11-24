#include<stdio.h>

int main() {
    // initialize variables
    char charVal;
    char name[9];
    int intVal;

    // Input syntax
    
    // Character
    printf("Enter Character: ");
    scanf("%c", &charVal);
    

    // String
    printf("Enter Name: ");
    scanf("%s", name);

    // Integer
    printf("Enter a Integer: ");
    scanf("%d", &intVal);

    

    // Output
    printf("Char: %c\n", charVal);
    printf("String: %s\n", name);
    printf("Integer: %d\n", intVal);

    return 0;
}