#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * @param nums: The integer array.
     * @param target: Target number to find.
     * @return: The first position of target. Position starts from 0. 
     */
    int binarySearch(vector<int> &array, int target) {
        // write your code here
        if (array.size() == 0) return -1;
        int left = 0, right = array.size() - 1, mid;
        while (left <= right)
        {
            mid = left + (right - left) / 2;
            cout << "left: " << left << " right: " << right << " mid: " << mid << endl;
            if (array[mid] == target)
            {
                while (array[mid] == target)
                    --mid;
                return (++mid);
            }
            else if (array[mid] > target)
                right = mid - 1;
            else
                left  = mid + 1;
        }
        return -1;
    }
};

int main()
{
    int tmp[] = {1, 4, 4, 5, 7, 7, 8, 9, 9, 10};
    vector<int> vec (tmp, tmp + sizeof(tmp) / sizeof(int));
    int target = 1;
    Solution *p = new Solution();
    cout << p->binarySearch(vec, target) << endl;
    return 0;
}