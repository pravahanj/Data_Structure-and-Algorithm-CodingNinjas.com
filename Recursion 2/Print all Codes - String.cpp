/*
Print all Codes - String
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. 
Write a program to print the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. Just print them in different lines.

Input format :
A numeric string S

Output Format :
All possible codes in different lines

Constraints :
1 <= Length of String S <= 10

Sample Input:
1123

Sample Output:
aabc
kbc
alc
aaw
kw

*/

#include <string>
#include <algorithm>
using namespace std;

char ctchar(int i) {
    char c = 'a' + i - 1;
    return c;
}
int ctin(char a) {
    int n = a - '0';
    return n;
}

void printAllPossibleCodes_Helper(string input, string ans) {
    //base case
    if(input.empty()) {
        cout << ans << endl;
        return;
    }
    
    //hypotheis
    char add = ctchar(ctin(input[0]));
    printAllPossibleCodes_Helper(input.substr(1), ans + add);
    
    
    
    if(input.size() > 1){
        int curr = ctin(input[0]) * 10 + ctin(input[1]);
        if(curr >= 10 & curr <= 26) {
            printAllPossibleCodes_Helper(input.substr(2), ans + ctchar(curr));
        }
    }
}

void printAllPossibleCodes(string input) {
    string res;
    printAllPossibleCodes_Helper(input, res);
}
