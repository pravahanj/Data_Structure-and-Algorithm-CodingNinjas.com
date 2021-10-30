/*
Check Number
Send Feedback
Given an array of length N and an integer x, you need to find if x is present in the array or not. Return true or false.
Do this recursively.

Input Format :
Line 1 : An Integer N i.e. size of array
Line 2 : N integers which are elements of the array, separated by spaces
Line 3 : Integer x

Output Format :
'true' or 'false'

Constraints :
1 <= N <= 10^3

*/

bool checkNumber(int input[], int size, int x) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
	// base case
    if(!size) {
        return false;
    } 
    
    // nth step; - > induction step
    if(input[0] == x)
        return true;
    
    //hypothesis
    bool hypothesis_Step = checkNumber(input + 1, size - 1, x);
    
    return hypothesis_Step;
    
}
