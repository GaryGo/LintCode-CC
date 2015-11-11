#include <iostream>

using namespace std;

class Solution {
public:    
    /**
     * @param A, B: Two string.
     * @return: the length of the longest common substring.
     */
    int longestCommonSubstring(string &A, string &B) 
    {
    	int alen = A.length(), blen = B.length();
    	if (alen == 0 || blen == 0) return 0;
        int **res;
        res = new int* [alen];

        for (int i = 0; i < alen; ++i)
        {
        	res[i] = new int[blen];
        }
        
        for (int i = 0; i < alen; ++i)
        {
            for (int j = 0; j < blen; ++j)
                res[i][j] = 0;
        }

        for (int i = 0; i < alen; ++i)
        {
        	if (A[i] == B[0])
        		res[i][0] = 1;
        }

        for (int i = 0; i < blen; ++i)
        {
        	if (A[0] == B[i])
        		res[0][i] = 1;
        }
        int longest = res[0][0];
        for (int i = 1; i < alen; ++i)
        {
        	for (int j = 1; j < blen; ++j)
        	{
        		if (A[i] == B[j])
        		{
        			res[i][j] = res[i - 1][j - 1] + 1;
        			if (longest < res[i][j])
        				longest = res[i][j];
        		}
        		else
        		{
        			res[i][j] = 0;
        		}

        	}
        }
        return longest;
    }
};

int main()
{
	Solution *p = new Solution();
	string str1("abcd");
	string str2("cbce");
	cout << p->longestCommonSubstring(str1, str2) << endl;
	return 0;
}

