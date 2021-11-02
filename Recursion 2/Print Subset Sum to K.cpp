/*
Print Subset Sum to K
Given an array A and an integer K, print all subsets of A which sum to K.
Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.

Note : The order of subsets are not important. Just print them in different lines.

Input format :
Line 1 : Size of input array
Line 2 : Array elements separated by space
Line 3 : K 

Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6

Sample Output:
3 3
5 1

*/

void printSubsetSumToK_helper(int *arr, int n, int index, int target, int *ans, int count) {
    //base case
    if(index == n) {
        if(target == 0 and count != 0) {
            for(int i = 0; i < count; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    
    // nth step -> whether the current element is considdered or not
    //not considered
    printSubsetSumToK_helper(arr, n , index + 1, target, ans, count);
    
    //considered
	ans[count] = arr[index];
    printSubsetSumToK_helper(arr, n, index + 1, target - arr[index], ans, count + 1);
    
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int ans[size];
    int count = 0;
    
    printSubsetSumToK_helper(input, size, 0, k, ans, count);
}
