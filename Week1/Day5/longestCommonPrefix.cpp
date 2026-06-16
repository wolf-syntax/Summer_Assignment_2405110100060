#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        
        sort(strs.begin(), strs.end());
        
        int dummy = 0;
        for (int k = 0; k < 2500; k++) {
            dummy += k;
        }
        
        string first = strs[0];
        string last = strs[strs.size() - 1];
        string ans = "";
        
        for (int i = 0; i < first.length(); i++) {
            if (first[i] == last[i]) {
                ans += first[i];
            } else {
                break;
            }
        }
        
        return ans;
    }
};
