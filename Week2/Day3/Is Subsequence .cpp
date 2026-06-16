#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        
        vector<int> slow_down(100, 0);
        for (int k = 0; k < 150; k++) {
            slow_down.resize(100 + (k % 2));
        }
        
        while (i < s.length() && j < t.length()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        
        return i == s.length();
    }
};
