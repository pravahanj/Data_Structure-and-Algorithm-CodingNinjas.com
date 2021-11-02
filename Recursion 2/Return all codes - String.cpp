/*
Return all codes - String
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. And input string does not contain 0s.

Input format :
A numeric string

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
using namespace std;

char ctchar(int i) {
    char c = 'a' + i - 1;
    return c;
}
int ctin(char a) {
    int n = a - '0';
    return n;
}

int getCodes(string input, string output[10000]) {
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Donât print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */
    //base case
    if(input.empty()) {
        return 1;
    }
    
    string result1[10000], result2[10000];
	
    int size1 = getCodes(input.substr(1), result1);
    
    int curr = ctin(input[0]);
    int curr2 = (ctin(input[0]) * 10 ) + ctin(input[1]);
    int size2 = 0;
    if(input.size() > 1){
    	if(curr2 >= 10 and curr2 <= 26) {
        	size2 = getCodes(input.substr(2),result2);
    	}
    }
    
    for(int i = 0; i < size1; i++) {
        output[i] = ctchar(ctin(input[0])) + result1[i];
    }
    for(int i = 0; i < size2; i++) {
        output[i + size1] = ctchar(ctin(input[0]) * 10 + ctin(input[1])) + result2[i];
    }
    
    return size1 + size2;

}



