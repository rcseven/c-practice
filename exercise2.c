#include<stdio.h>

int main() {
    // int vs float vs double
    
    // int - whole numbers and the range of values of the int data type is between -32,768 to 32,767
    // float - Six bit precision means that there would be six digits after the decimal point. (stored as 32 bits)
    // double - 52 bits of significand, 11 bits of exponent, and 1 sign bit.

    double numdouble;
    float numfloat;

    printf("Pick a number: ");
    scanf("%lf", &numdouble);


    // to output specific decimal %.nf... where n= no. of decimals
    printf("\nnum double %.30f\n", numdouble);
    numfloat = numdouble;
    printf("num float %.30f", numfloat);

    return 0;

}