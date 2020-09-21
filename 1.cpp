/*
Problem 1
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

// CODE

#include <iostream>
using namespace std;

int main() {
    
    int in1 = 5, in2 = 3, in3 = 15;
    int n1, n2, n3, n = 1000;
    int an1 = ((n-1)/5)*5, an2 = ((n-1)/3)*3, an3 = ((n-1)/15)*15;
    
    n1 = an1/5 ;
    n2 = an2/3 ;
    n3 = an3/15 ;
    
    int ans = (n1*(in1 + an1))/2 + (n2*(in2 + an2))/2 - (n3*(in3 + an3))/2;
    
    cout<<ans;
    
	return 0;
}

/*
Answer:  233168
*/
