class Solution {
public:
    vector<int> sortedSquares(vector<int>& num) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int n = num.size();
        std::vector<int> ans(n);
        int left = 0;
        int right = n - 1;
        
        for (int i = n - 1; i >= 0; i--) {
            if (abs(num[left]) > abs(num[right])) {
                ans[i] = num[left] * num[left];
                left++;
            } else {
                ans[i] = num[right] * num[right];
                right--;
            }
        }
        
        return ans;
    }
        
    
};
