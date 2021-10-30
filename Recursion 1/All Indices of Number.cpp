/*
All Indices of Number
Given an array of length N and an integer x, you need to find all the indexes where x is present in the input array. Save all the indexes in an array (in increasing order).
Do this recursively. Indexing in the array starts from 0.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
indexes where x is present in the array (separated by space)

Constraints :
1 <= N <= 10^3

*/


int allIndexes(int input[], int size, int x, int output[], int count = 0, int index = 0) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Save all the indexes in the output array passed and return the size of output array.
     Taking input and printing output is handled automatically.
  */
	// base case
    if(!size) {
        return count;
    }
    
    // nth step -> comparing presence with that element
    if(input[0] == x){
        output[count++] = index;
    }
    
    //hypothesis -> reach the nth step
    return allIndexes(input + 1, size - 1, x, output, count, index + 1);
    
}
