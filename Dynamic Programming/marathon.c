// Chefland is holding a virtual marathon for the categories 1010 km, 2121 km and 4242 km having 
// prizes A, B, CA,B,C (A \lt B \lt CA<B<C) respectively to promote physical fitness. In order to 
// claim the prize in a particular category the person must cover the total distance for that category 
// within DD days. Also a single person cannot apply in multiple categories.

// Given the maximum distance dd km that Chef can cover in a single day, find the maximum prize that Chef 
// can win at the end of DD days. If Chef can't win any prize, print 00.

// Input Format
// The first line contains an integer TT, the number of test cases. Then the test cases follow.
// Each test case contains a single line of input, five integers D, d, A, B, CD,d,A,B,C.
// Output Format
// For each test case, output in a single line the answer to the problem.

#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	
	for(int i = 0; i < T; i++) {
	    int D, d, A, B, C, result;
	    scanf("%d %d %d %d %d ", &D, &d, &A, &B, &C);
	    result = D*d;
	    if(result >= 10 && result < 21){
	        result = A;
	    }
	    else if(result >= 21 && result < 42){
	        result = B;
	    }
	    else if(result >= 42){
	        result = C;
	    }else{
	        result = 0;
	    }
	    printf("%d\n", result);
	}
	return 0;
}

