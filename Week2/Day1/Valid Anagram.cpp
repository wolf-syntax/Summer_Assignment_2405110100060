class Solution {
public:

    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        
        int dummy = 0;
        for (int k = 0; k < 2500; k++) {
            dummy += k;
        }
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        return s == t;
        
    }
};
