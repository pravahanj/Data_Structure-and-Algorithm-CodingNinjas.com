/*
Sum of digits (recursive)
Write a recursive function that returns the sum of the digits of a given integer.

Input format :
Integer N

Output format :
Sum of digits of N

Constraints :
0 <= N <= 10^9
*/

int sumOfDigits(int n) {
    // Write your code here
	// base case
    if(n / 10 == 0) {
        return n;
    }
    
    //hypothesis -> to reach nth step
    int running_Sum = sumOfDigits(n/10);
    
    // Induction
    int result = n % 10 + running_Sum;
    
    return result;
}


