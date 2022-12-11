// Problem

// Pooja would like to withdraw X $US from an ATM. The cash machine will only accept the transaction 
// if X is a multiple of 5, and Pooja's account balance has enough cash to perform the withdrawal transaction 
// (including bank charges). For each successful withdrawal the bank charges 0.50 $US.

// Calculate Pooja's account balance after an attempted transaction.

// Input Format
// Each input contains 2 integers XX and YY.
// XX is the amount of cash which Pooja wishes to withdraw.
// YY is Pooja's initial account balance.

// Output Format
// Output the account balance after the attempted transaction, given as a number with two digits of precision. If there is not enough money in the account to complete the transaction, output the current bank balance.

#include <stdio.h>

int main() {
    int x, y;
    scanf("%d %d", &x,&y);
    float balance = y;
    
    if(x % 5 == 0 && y > x)
        balance = balance-x-0.5;
    
    
    printf("%.2f", balance);

    return 0;
}