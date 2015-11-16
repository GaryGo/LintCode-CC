#include <iostream>

class Solution {
    /** 
     * param A : an integer ratated sorted array
     * param target :  an integer to be searched
     * return : an integer
     */
public:
    int search(vector<int> &A, int target) {
        // write your code here
       	if (A.empty()) return -1;
       	int left = 0, right = A.size() - 1, mid;
       	while (left <= right)
       	{
       		int mid = left + (right - left) / 2;
       		if (A[mid] == target) return mid;
       		else if (A[left] <=  A[mid])
       		{
       			if (A[left] <= target && target < A[mid])
					right = mid - 1;
				else 
					left = mid + 1;	
       		}
       		else 
       		{
       			if (A[mid] < target && target <= A[right])
       				left = mid + 1;
       			else
       				right = mid - 1;
       		}
       	}
       	return -1;
    }
};