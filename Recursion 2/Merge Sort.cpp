/*
Merge Sort Code
Sort an array A using Merge Sort.
Change in the input array itself. So no need to return or print anything.

Input format :
Line 1 : Integer n i.e. Array size
Line 2 : Array elements (separated by space)

Output format :
Array elements in increasing order (separated by space)

Constraints :
1 <= n <= 10^3

Sample Input 1 :
6 
2 6 8 5 4 3

Sample Output 1 :
2 3 4 5 6 8


Sample Input 2 :
5
2 1 5 2 3

Sample Output 2 :
1 2 2 3 5 

*/

void mergeHalves(int *input, int s, int mid, int e) {
    int l1 = mid - s + 1;
    int l2 = e - mid;
    
    int arr1[1000], arr2[1000];
    
    for(int i = 0; i < l1 ; i++) {
        arr1[i] = input[s + i];
    }
    
    for(int i = 0 ; i < l2; i++) {
        arr2[i] = input[mid + i + 1];
    }
    
    int i = 0;
    int j = 0;
    int k = s;
    
    while(i < l1 and j < l2) {
        if(arr1[i] < arr2[j]) {
            input[k++] = arr1[i++];
        }
        else {
         	input[k++] = arr2[j++];   
        }
    }
    
    while(i < l1) {
        input[k++] = arr1[i++];
    }
    
    while( j < l2) {
         	input[k++] = arr2[j++];   
        
    }
}

void mergeSort_Actual(int *arr,int s, int e) {
    // base case
    if(s >= e) {
        return;
    }
    int mid = (s + e) / 2;
    
    mergeSort_Actual(arr, s, mid);
    mergeSort_Actual(arr, mid + 1, e);
    
    mergeHalves(arr, s, mid, e);
}


void mergeSort(int input[], int size){
	// Write your code here
    mergeSort_Actual(input,0,size - 1);
}


