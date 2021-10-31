/*
Remove X
Given a string, compute recursively a new string where all 'x' chars have been removed.

Input format :
String S

Output format :
Modified String

Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 


Sample Input 1 :
xaxb

Sample Output 1:
ab


Sample Input 2 :
abc

Sample Output 2:
abc

*/

// Change in the given string itself. So no need to return or print anything

void removeX_Actual(char temp[], char output[],int size,int count = 0) {
    //Base Case
    if(!size) {
       return; 
    }
    
    // nth step
    if(*temp != 'x'){
        output[count++] = *temp;
    }
    
    // hypothesis step
    removeX_Actual(temp + 1, output, size - 1, count);
        
}

void removeX(char input[]) {
    // Write your code here
	char output[1000] = " ";
    
    char *ptr = input;
    int size = 0;
    while(*ptr){
        size++;
        ptr++;
    }
    
    removeX_Actual(input, output, size);
    
    for(int i = 0; input[i] != '\0'; i++) {
        input[i] = '\0';
    }
    
    for(int i = 0; output[i] != '\0'; i++){
    	input[i] = output[i];
    }
}
