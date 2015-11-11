#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /**
     * @param A: A string includes Upper Case letters
     * @param B: A string includes Upper Case letter
     * @return:  if string A contains all of the characters in B return true 
     *           else return false
     */
    bool compareStrings(string A, string B) {
    	if (A.empty() || A.size() == 0) return (B.empty() || B.size() == 0);
    	unordered_map <char, int> map;
    	for (auto const& c : A)
    	{
    		if (map.find(c) == map.end())
    			map.emplace(c, 1);
    		else 
    			++map[c];
    	}
    	for (auto const& c : B)
    	{
    		if (map.find(c) == map.end())
    			return false;
    		else if (--map[c] < 0)
    			return false;
    	}
    	return true;
    }
};

int main()
{
	Solution *p = new Solution();
	cout << p->compareStrings("", "A") << endl;
	return 0;
}