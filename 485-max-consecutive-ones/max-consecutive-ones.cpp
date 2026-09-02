class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int count = 0;
        int mixi = 0;

        for (int i = 0; i < nums.size(); i++) {
            
            if (nums[i] == 1) {
                count++;
                mixi = max(mixi, count);
            }
            else {
                count = 0;
            }
        }

        return mixi;
    }
};