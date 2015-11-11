#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * @param s: The first string
     * @param b: The second string
     * @return true or false
     */
    bool anagram(string s, string t)
    {
        if (s.empty() || s.length() == 0) return (t.length() == 0 || t.empty());
        if (s.length() != t.length()) return false;
        int map[256] = {0};
        for (int i = 0; i < s.length(); ++i)
        {
            ++map[s[i]];
            --map[t[i]];
        }
        for (int j = 0; j < t.length(); ++j)
        {
            if (map[t[j]] < 0)
                return false;
        }
        return true;
    }
};

int main()
{
    Solution *p = new Solution();
    cout << p->anagram("abc", "abc") << endl;
    return 0;
}
