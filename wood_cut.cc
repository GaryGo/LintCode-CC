class Solution {
public:
    /** 
     *@param L: Given n pieces of wood with length L[i]
     *@param k: An integer
     *return: The maximum length of the small pieces.
     */
    int woodCut(vector<int> L, int k) {
        if (L.size() == 0) return 0;
        int left = 1, right = *max_element(L.cbegin(), L.cend());
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (pCnt(L, mid) < k)
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left - 1;
    }

    int pCnt(vector<int> L, int x)
    {
        int cnt = 0;
        for (const auto& len : L)
            cnt += len / x;
        return cnt;
    }
};
