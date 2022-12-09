#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Ryan";
    char string2[] = "ryan";

    // strlwr(string)                   converts a string to lowercase
    // strupr(string)                   converts a string to uppercase
    // strcat(string1, string2)         appends string2 to end of string1
    // strncat(string1, string2, 3)     append index 'n' char from string2 to string1
    // strcpy(string1, string2)         copy string2 to string1
    // strncpy(string1, string2)        copy 'n' of char of string2 to string1

    // strset(string1, '?');            set all characters of a string to a given char
    // strnset(string1, 'x', n);        set n chars of string to a given char
    // strrev(string1)
    
    // return an integer
    // strlen(string)                   return string length as n
    // strcmp(string1, string2)         string compare all char if they're the same it will return 0 and will return number of char that are the same
    // strncmp(string1, string2, 3)     string compare n char
    // strcmpi()                        ignore case(caps)
    // strncmpi()                       ignore case(caps)

    printf("%d", strnicmp(string1, string2,1));


    return 0;
}