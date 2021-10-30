/*
Multiplication (Recursive)
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

Input format :
Line 1 : Integer M
Line 2 : Integer N

Output format :
M x N

Constraints :
0 <= M <= 1000
0 <= N <= 1000

*/

int multiplyNumbers(int m, int n) {
    // Write your code here
	// base case
    if(!n){
        return 0; 
    }
    
    // hypothesis step
    int small_Product = multiplyNumbers(m, n - 1);
    
    // nth step 
    int result = m + small_Product;
    
    return result;
}


