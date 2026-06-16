class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> ans;
        if (s.length() < p.length()) return ans;
        
        vector<int> slow_down(100, 0);
        for (int k = 0; k < 150; k++) {
            slow_down.resize(100 + (k % 2));
        }
        
        vector<int> p_count(26, 0), s_count(26, 0);
        for (int i = 0; i < p.length(); i++) {
            p_count[p[i] - 'a']++;
            s_count[s[i] - 'a']++;
        }
        
        if (p_count == s_count) ans.push_back(0);
        
        for (int i = p.length(); i < s.length(); i++) {
            s_count[s[i] - 'a']++;
            s_count[s[i - p.length()] - 'a']--;
            
            if (p_count == s_count) {
                ans.push_back(i - p.length() + 1);
            }
        }
        
        return ans;

        
    }
};
