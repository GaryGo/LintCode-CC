#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:    
    /**
     * @param strs: A list of strings
     * @return: A list of strings
     */
    vector<string> anagrams(vector<string> &strs) 
    {
       	unordered_map<string, int> table;
       	for (auto str : strs)
       	{
       		sort(str.begin(), str.end());
       		++table[str];
       	}
       	vector<string> res;
       	for (const auto& str : strs)
       	{
       		string sorted_str(str);
       		sort(sorted_str.begin(), sorted_str.end());
       		if (table[sorted_str] >= 2)
       			res.push_back(str);
       	}
       	return res;
    }

};

int main()
{
	vector<string> strs;
	strs.push_back("lint");
	strs.push_back("intl");
	strs.push_back("inlt");
	strs.push_back("code");
	Solution *p = new Solution();
	vector<string> vec = p->anagrams(strs);
	for (string s : vec)
	{
		cout << s << "	";
	}
	cout << endl;
}