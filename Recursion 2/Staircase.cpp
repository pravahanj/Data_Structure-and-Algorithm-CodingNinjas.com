/*
Staircase
A child is running up a staircase with N steps, and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return number of possible ways W.

Input format :
Integer N

Output Format :
Integer W

Constraints :
1 <= N <= 30

Sample Input 1 :
4

Sample Output 1 :
7


Sample Input 2 :
5

Sample Output 2 :
13

*/

int staircase(int n){
    /* Don't write main().
     *  Don't read input, it is passed as function argument.
     *  Return output and don't print it.
     *  Taking input and printing output is handled automatically.
     */
    //base case
    if(n == 1){
        return 1;
    }
    else if(n == 2) {
        return 2;
    }
    else if(n == 3) {
        return 4;
    }
     
    //person can reach nth step from n-1, n-2,, n-2;
    
    //hypothesis
    int small_output1 = staircase(n - 1);
    int small_output2 = staircase(n - 2);
    int small_output3 = staircase(n - 3);
    
    return small_output1 + small_output2 + small_output3;
}
