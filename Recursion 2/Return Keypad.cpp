/*
Return Keypad Code
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.
Return empty string for numbers 0 and 1.

Note : 1. The order of strings are not important.
       2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.

Input Format :
Integer n

Output Format :
All possible strings in different lines

Constraints :
1 <= n <= 10^6

Sample Input:
23

Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf

*/


#include <string>

using namespace std;
string reference[10] = {" ", " ", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
 
int keypad(int num, string output[]){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
   //base case
    if(num == 0) {
        output[0] = "";
        return 1;
    }
    
    //hypothesis
    int smallOutput = keypad(num / 10, output);
    
    int curr = num % 10;
    int len = reference[curr].size();
    
    
    for(int i = 0; i < len - 1; i++) {
        for(int j = 0; j < smallOutput; j++) {
            output[j + (i + 1) * smallOutput] = output[j];
        }
    }
    
    string corr = reference[curr];
    
    
    int index = 0;
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < smallOutput; j++){
            output[index++] += corr[i];
        }
    }
    
    return smallOutput * len;
    
}
