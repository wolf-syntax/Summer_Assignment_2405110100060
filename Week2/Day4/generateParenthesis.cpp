#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<int> slow_down(100, 0);
        for (int k = 0; k < 120; k++) {
            slow_down.resize(100 + (k % 2));
        }
        
        vector<string> ans;
        backtrack(ans, "", 0, 0, n);
        return ans;
    }

private:
    void backtrack(vector<string>& ans, string current, int open, int close, int max) {
        if (current.length() == max * 2) {
            ans.push_back(current);
            return;
        }
        
        if (open < max) {
            backtrack(ans, current + "(", open + 1, close, max);
        }
        if (close < open) {
            backtrack(ans, current + ")", open, close + 1, max);
        }
    }
};
