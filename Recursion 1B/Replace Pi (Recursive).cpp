/*
Replace pi (recursive)
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 

Sample Input 1 :
xpix

Sample Output :
x3.14x


Sample Input 2 :
pipi

Sample Output :
3.143.14


Sample Input 3 :
pip

Sample Output :
3.14p

*/

// Change in the given string itself. So no need to return or print anything

void replacePiActual(char temp[], char output[], int count = 0) {
	
    char *ptr = temp;
    int size = 0;
    while(*ptr) {
        size++;
        ptr++;
    }
    
    // BASE CASE
    if(!size){
        return;
    }
    
    // nth step
    if(*temp == 'p') {
        if(*(temp + 1) == 'i') {
            output[count++] = '3';
            output[count++] = '.';
            output[count++] = '1';
            output[count++] = '4';
            temp++;
        }
        else
        	output[count++] = *temp;
    }
    else {
        output[count++] = *temp;
    }
    
    replacePiActual(temp + 1, output, count);
    
}

void replacePi(char temp[]) {
    char output[1000] = "";
    replacePiActual(temp, output);
    
    for(int i = 0; output[i] != '\0'; i++){
    	temp[i] = output[i];
    }
}

