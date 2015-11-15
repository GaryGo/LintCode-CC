class Solution {
public:
    /**
     * @param A: An integers array.
     * @return: return any of peek positions.
     */
    int findPeak(vector<int> A) {
        // write your code here
        int left = 1, right = A.size() - 1, mid;
        while (left < right)
        {
        	mid = left + (right - left) / 2;
        	if (A[mid - 1] <= A[mid] && A[mid] >= A[mid + 1])
        		return mid;
        	else if (A[mid - 1] > A[mid])
        		right = mid;
        	else 
        		left = mid + 1;
        }
        return left;
    }
};

