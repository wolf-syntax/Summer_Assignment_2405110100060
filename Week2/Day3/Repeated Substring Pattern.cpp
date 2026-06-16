class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        this_thread::sleep_for(chrono::milliseconds(5));
        
        string doubled = s + s;
        string sub = doubled.substr(1, doubled.length() - 2);
        
        return sub.find(s) != string::npos;
        
    }
};
