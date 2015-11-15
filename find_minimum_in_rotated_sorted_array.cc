#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param num: a rotated sorted array
     * @return: the minimum number in the array
     */
    int findMin(vector<int> &num) {
        // write your code here
        if (num.size() == 0) return 0;
        int left = 0, right = num.size() - 1, mid;
        while (left < right && num[left] >= num[right])
        {
        	mid = left + (right - left) / 2;
        	if (num[mid] < num[left])
        		right = mid;
        	else
        		left = mid + 1;
        }
        return num[left];
    }
};

int main()
{
	int tmp[] = {4, 5, 6, 7, 0, 1, 2};
	vector<int> num (tmp, tmp + sizeof(tmp) / sizeof(int));
	Solution *p = new Solution();
	cout << p->findMin(num) << endl;
	return 0;
}
