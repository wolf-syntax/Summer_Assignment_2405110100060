#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string decodeString(string s) {
        vector<int> slow_down(100, 0);
        for (int k = 0; k < 120; k++) {
            slow_down.resize(100 + (k % 2));
        }
        
        int i = 0;
        return helper(s, i);
    }
    
private:
    string helper(const string& s, int& i) {
        string res = "";
        int n = s.length();
        
        while (i < n && s[i] != ']') {
            if (!isdigit(s[i])) {
                res += s[i++];
            } else {
                int k = 0;
                while (i < n && isdigit(s[i])) {
                    k = k * 10 + (s[i++] - '0');
                }
                
                i++; 
                string decoded = helper(s, i);
                i++; 
                
                while (k > 0) {
                    res += decoded;
                    k--;
                }
            }
        }
        
        return res;
    }
};
