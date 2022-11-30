#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b;
    char *word[] = {
        "one","two","three",
        "four","five","six",
        "seven","eight","nine",
    };
    scanf("%d\n%d", &a, &b);

    // For each integer n in the interval [a,b] (given as input) :
    // If 1 <= n <= 9  then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.   
    // Else if n > 9 and it is an even number, then print "even".
    // Else if n > 9  and it is an odd number, then print "odd".
    
    
    // Complete the code.
    for (int i = a; i <= b; i++) {
        if (i >= 1 && i <= 9) {
            printf("%s\n", word[i-1]);
        }else {
            printf("%s\n", i%2==0 ? "even" : "odd");
        }
    }
    
    return 0;
}

