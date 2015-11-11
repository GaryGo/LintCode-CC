#include <iostream>

using namespace std;

class Solution {
public:
    /**
     * Returns a index to the first occurrence of target in source,
     * or -1  if target is not part of source.
     * @param source string to be scanned.
     * @param target string containing the sequence of characters to match.
     */
    int strStr(const char *source, const char *target) {
    	if (source != nullptr && target != nullptr)
    	{
    		const string src(source), tgt(target);
    		for (int i = 0; i < src.length() - tgt.length() + 1; ++i)
    		{
    			if (src.substr(i, tgt.length()) == tgt)
    			{
    				return i;
    			}
    		}
    	}
    	return -1;
    }
};