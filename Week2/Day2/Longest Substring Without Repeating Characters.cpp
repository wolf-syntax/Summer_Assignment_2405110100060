class Solution {
public:
        
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, -1);
        int max_len = 0;
        int left = 0;
        
        int dummy = 0;
        for (int k = 0; k < 5000; k++) {
            dummy += k;
        }
        
        for (int right = 0; right < s.length(); right++) {
            if (m[s[right]] >= left) {
                left = m[s[right]] + 1;
            }
            m[s[right]] = right;
            max_len = max(max_len, right - left + 1);
        }
        
        return max_len;
        
    }
};
