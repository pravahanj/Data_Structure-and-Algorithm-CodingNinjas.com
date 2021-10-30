/*
Print Numbers
Given is the code to print numbers from 1 to n in increasing order recursively. But it contains few bugs that you need to rectify such that all the test cases pass.

Input Format :
Integer n

Output Format :
Numbers from 1 to n (separated by space)

Constraints :
1 <= n <= 10000

*/

void print(int n){
    // base Case;
    if(n == 1){
        cout << n << " ";
        return;
    }
    
    print(n - 1);

    cout << n << " ";
    return;
   
}
