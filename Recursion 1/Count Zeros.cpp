/*
Count Zeros
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Input Format :
Integer N

Output Format :
Number of zeros in N

Constraints :
0 <= N <= 10^9

*/


int countZeros(int n, int count = 0) {
    // Write your code here
	
    // base case 
    if (!n) {
        return 1;
    } else if (n / 10 == 0) {
    	return count;
    }
    
    // nth step
    if(!(n % 10)) {
        count++;
    }
    // hypothesis step -> to reach the nth step
    int smallCount = countZeros(n/10, count);
    
    return smallCount;
    
}


