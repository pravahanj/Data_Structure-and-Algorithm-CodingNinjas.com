/*
Return Permutations - String
Given a string S, find and return all the possible permutations of the input string.

Note 1 : The order of permutations is not important.
Note 2 : If original string contains duplicate characters, permutations will also be duplicates.

Input Format :
String S

Output Format :
All permutations (in different lines)

Sample Input :
abc

Sample Output :
abc
acb
bac
bca
cab
cba

*/

#include <string>
#include <algorithm>
using namespace std;

int returnPermutations(string input, string output[]){
   	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
   if(input.size() == 0){
       output[0] ="";
   	   return 1;
   	}
    
    string smallString[10000];
    int smallsize = returnPermutations(input.substr(1), smallString);
    
    int idx = 0;
    for(int i = 0; i < smallsize; i++) {
        for(int j = 0; j <= smallString[i].size(); j++){
            output[idx++] = smallString[i].substr(0,j) + input[0] + smallString[i].substr(j);
        }
    }
    
    return idx;
       
}
