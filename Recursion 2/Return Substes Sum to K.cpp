/*
Return subsets sum to K
Given an array A of size n and an integer K, return all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.

Note : The order of subsets are not important.

Input format :
Line 1 : Integer n, Size of input array
Line 2 : Array elements separated by space
Line 3 : K 

Constraints :
1 <= n <= 20

Sample Input :
9 
5 12 3 17 1 18 15 3 17 
6

Sample Output :
3 3
5 1

*/

/***
You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
	{{2, 1, 4},	// Length of this subset is 2
	{2, 3, 2}}	// Length of this subset is 2

Donot print the subsets, just save them in output.
***/

void subsetSumToK_helper(int *arr,int n, int index, int output[][50], int &output_size, int target, int *ans, int count) {
    // base case
    if(index == n) {
        if(target == 0 and count != 0) {
            output[output_size][0] = count;
            for(int i = 0; i < count; i++){
                output[output_size][i + 1] = ans[i];
            }
            output_size++;
        }
        return;
    }
    
    //nth step
    //if the element is not taken
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target, ans, count);
    
    //if nth element is included
    ans[count] = arr[index];
    subsetSumToK_helper(arr, n, index + 1, output, output_size, target - arr[index], ans, count + 1);
    
}

int subsetSumToK(int input[], int n, int output[][50], int k) {
    // Write your code here
    int ans[n];
    int output_size = 0;
    int count = 0;
    int index = 0;
    
    subsetSumToK_helper(input, n, 0, output, output_size, k, ans, count);
    return output_size;
    
}

