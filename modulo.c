// Sum of Digits of a Five Digit Number

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);

    // Given a five digit integer, print the sum of its digits.
    
    //Complete the code to calculate the sum of the five digits on n.
    int sum;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }


    printf("%d", sum);
    return 0;
}