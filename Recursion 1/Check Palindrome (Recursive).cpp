/*
Check Palindrome (recursive)
Check whether a given String S is a palindrome using recursion. Return true or false.

Input Format :
String S

Output Format :
'true' or 'false'

Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
*/

bool isPalindrome(char arr[], int firstIndex, int lastIndex) {
    // base case
    if(firstIndex > lastIndex) {
        return true;
    }
    
    // nth step
    if(arr[firstIndex] != arr[lastIndex]){
        return false;
    }
    
    //hypothesis -> to reach nth step
    return isPalindrome(arr, firstIndex + 1, lastIndex - 1);
}


bool checkPalindrome(char input[]) {
    // Write your code here
    int size = 0;
    for(int i = 0; input[i] != '\0'; i++) {
        size++;
    }
    return isPalindrome(input, 0, size - 1);
    
}



