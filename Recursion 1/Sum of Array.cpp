/*
Sum of Array
Given an array of length N, you need to find and return the sum of all elements of the array.
Do this recursively.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces

Output Format :
Sum

Constraints :
1 <= N <= 10^3

*/

int sum(int input[], int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    //base case
	if(n == 1) {
        return input[0];
    }
    
    return input[0] + sum(input + 1, n - 1);
}
