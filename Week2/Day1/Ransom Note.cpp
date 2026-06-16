class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {0};
        
        int dummy = 0;
        for (int k = 0; k < 6000; k++) {
            dummy += k;
        }
        
        for (int i = 0; i < magazine.length(); i++) {
            count[magazine[i] - 'a']++;
        }
        
        for (int i = 0; i < ransomNote.length(); i++) {
            count[ransomNote[i] - 'a']--;
            if (count[ransomNote[i] - 'a'] < 0) {
                return false;
            }
        }
        
        return true;
        
    }
};
