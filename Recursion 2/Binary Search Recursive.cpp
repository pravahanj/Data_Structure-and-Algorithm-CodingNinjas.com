/*
Binary Search (Recursive)
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search. Return the index of x.
Return -1 if x is not present in the given array.

Note : If given array size is even, take first mid.

Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)


Sample Input :
6
2 3 4 5 6 8 
5 

Sample Output:
3 

*/

// input - input array
// size - length of input array
// element - value to be searched

int binarySearch_actual(int input[], int low, int high, int element) {
    //base case;
    
    if(low > high) {
        return -1;
    }
    
    int mid = (low + high) / 2;
    
    if(input[mid] == element) {
        return mid;
    }
    if(input[mid] > element) {
        return binarySearch_actual(input, low , mid - 1, element);
    }
    if(input[mid] < element) {
        return binarySearch_actual(input, mid + 1, high, element);
    }
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
    
	return binarySearch_actual(input, 0, size - 1, element);
}


