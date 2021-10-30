/*
Geometric Sum
Given k, find the geometric sum i.e.
  1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k) 
using recursion.

Input format :
Integer k

Output format :
Geometric sum (upto 5 decimal places)

Constraints :
0 <= k <= 1000

*/

double geometricSum(int k) {
    // Write your code here
	// base case
    if(!k){
        return 1;
    }
    // hypothesis step
    double smallSum = geometricSum(k - 1);
    
    // nth step (since we need to use the result of previous steps as well)
    double result =  smallSum + (1.0 / (1 << k));
    
    return result;
}


