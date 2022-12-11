// Problem
// Ezio can manipulate at most XX number of guards with the apple of eden.

// Given that there are YY number of guards, predict if he can safely manipulate all of them.

// Input Format
// First line will contain TT, number of test cases. Then the test cases follow.
// Each test case contains of a single line of input, two integers XX and YY.
// Output Format
// For each test case, print \texttt{YES}YES if it is possible for Ezio to manipulate all the guards. Otherwise, print \texttt{NO}NO.

// You may print each character of the string in uppercase or lowercase 
// (for example, the strings \texttt{YeS}YeS, \texttt{yEs}yEs, \texttt{yes}yes and \texttt{YES}YES will all be treated as identical).

#include <stdio.h>

int main(void) {
	int t;
	scanf("%d", &t);
	
	for(int i=0; i < t;i++){
	    int x,y;
	    scanf("%d %d", &x, &y);
	    printf("%s\n", x>=y ? "yes" : "no");
	}
	
	return 0;
}