/*
Power
Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to return the answer.
Do this recursively.

Input format :
Two integers x and n (separated by space)

Output Format :
x^n (i.e. x raise to the power n)

Constraints :
1 <= x <= 30
0 <= n <= 30

*/


int power(int x, int n) {
  /* Don't write main().
     Don't read input, it is passed as function argument.
     Return output and don't print it.
     Taking input and printing output is handled automatically.
  */
    // Base Case 
	if(!n){
        return 1;
    }
    int hypothesis = power(x , n - 1);
    int induction = x * hypothesis;
    
    return induction;
}
