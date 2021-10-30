/*
First Index of Number
Given an array of length N and an integer x, you need to find and return the first index of integer x present in the array. Return -1 if it is not present in the array.
First index means, the index of first occurrence of x in the input array.
Do this recursively. Indexing in the array starts from 0.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
first index or -1

Constraints :
1 <= N <= 10^3

*/

int firstIndex(int input[], int size, int x, int count = 0) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    // base case
    if(size == 0) {
        return -1;
    }
    
    // nth step 
	if(input[0] == x){
        return count;
    }
    
    // hypothesis step 
    int hypothesis_step = firstIndex(input + 1, size - 1, x, count + 1);
    
    return hypothesis_step;
}
