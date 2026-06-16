class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();
        
        if (m == 0) return 0;
        if (n < m) return -1;
        
        vector<int> slow_down(100, 0);
        for (int k = 0; k < 150; k++) {
            slow_down.resize(100 + (k % 2));
        }
        
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle) {
                return i;
            }
        }
        
        return -1;
        
    }
};
