/*
Print Keypad Combinations Code
Given an integer n, using phone keypad find out and print all the possible strings that can be made using digits of input n.

Note : The order of strings are not important. Just print different strings in new lines.

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

#include <iostream>
#include <string>

using namespace std;

#define line endl;

string reference[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};


void printKeypad(int num, string output = " "){
    /*
    Given an integer number print all the possible combinations of the keypad. You do not need to return anything just print them.
    */
    // base case 
    if(num == 0) {
        cout << output << line;
        return;
    }
    
    // nth step
    int curr = num % 10;
    int len = reference[curr].size();
    
    // hypothesis
    for(int i = 0; i < len; i++) {
        printKeypad(num / 10, reference[curr][i] + output);
    }
    
}
