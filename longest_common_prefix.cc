#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        if (strs.size() == 0) return "";
        int len = strs[0].size();
        for (int i = 0; i < len; ++i)
        {
            for (const auto& str : strs)
            {
                if (str[i] != strs[0][i])
                {
                    len = i;
                    break;
                }
            }
       }
        return strs[0].substr(0, len);
    }
};

int main()
{
     string str0("ABC");
     string str1("ABCD");
     string str2("ABCDE");
     vector<string> vec;
     vec.push_back(str0);
     vec.push_back(str1);
     vec.push_back(str2);
     Solution *p = new Solution();
    cout << p->longestCommonPrefix(vec) << endl;
    return 0;
}

