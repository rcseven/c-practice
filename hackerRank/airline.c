// Chef has 33 bags that she wants to take on a flight. They weigh AA, BB, and CC kgs respectively. 
// She wants to check-in exactly two of these bags and carry the remaining one bag with her.

// The airline restrictions says that the total sum of the weights of the bags that are checked-in 
// cannot exceed DD kgs and the weight of the bag which is carried cannot exceed EE kgs. Find if Chef 
// can take all the three bags on the flight.

// Input Format
// The first line of the input contains a single integer TT denoting the number of test cases. 
// The description of TT test cases follows. Each testcase contains a single line of input, 
// five space separated integers A, B, C, D, EA,B,C,D,E.

// Output Format
// For each testcase, output in a single line answer "YES" if Chef can take all the three bags 
// with her or "NO" if she cannot.

// You may print each character of the string in uppercase or lowercase 
// (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).

#include <stdio.h>
#include <stdbool.h>

int main(){
    int T;
    scanf("%d", &T);
    
    for(int i=0; i < T; i++){
        int A,B,C,D,E;
        scanf("%d %d %d %d %d ", &A, &B, &C, &D, &E);
        int sum = A+B+C;
        bool safe = false;
        
        if( sum-A <= D && A <= E || 
            sum-B <= D && B <= E || 
            sum-C <= D && C <= E){
                safe = true;
        }
        printf("%s", safe ? "Yes\n":"No\n");
    }
    return 0;
}