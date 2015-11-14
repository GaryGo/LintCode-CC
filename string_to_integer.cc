#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param str: A string
     * @return An integer
     */
    int atoi(string str) {
        // write your code here
        if (str.size() == 0) return 0;
        bool negative = false;
        int res = 0, i = 0;
        while (str[i] == ' ') 
            ++i;
        if (str[i] == '+')
        {
            ++i;
        }
        else if (str[i] == '-')
        {
            negative = true;
            ++i;
        }
        
        for (; i < str.size() && isdigit(str[i]); ++i)
        {
            if (res > (INT_MAX - (str[i] - '0')) / 10) 
                return negative ? INT_MIN : INT_MAX;
            res  = res * 10 + (str[i] - '0');
        }
        return negative ? (-1 * res) : res;
    }
};

int main()
{
    Solution *p = new Solution();
    string str("123123123123123");
    cout << p->atoi(str) << endl;
    return 0;
}
