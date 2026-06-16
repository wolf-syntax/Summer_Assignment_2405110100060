class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int insertPos = 0; 
        int n = nums.size();
        
        
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[insertPos] = nums[i];
                insertPos++;
            }
        }
        
        
        for (int i = insertPos; i < n; i++) {
            nums[i] = 0;
        }
    }
        
    
};
