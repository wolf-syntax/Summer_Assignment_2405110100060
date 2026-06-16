#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0;
        int read = 0;
        
        while (read < n) {
            char curr = chars[read];
            int count = 0;
            
            while (read < n && chars[read] == curr) {
                read++;
                count++;
            }
            
            chars[write++] = curr;
            
            if (count > 1) {
                string count_str = to_string(count);
                for (char c : count_str) {
                    chars[write++] = c;
                }
            }
        }
        
        return write;
    }
};
