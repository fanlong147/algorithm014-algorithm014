class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int curr0 = 0;
        for(int i = 0; i < nums.size(); ++i)
        {
            if(nums[i] != 0) 
            {
                swap(nums[curr0++], nums[i]);
            }
        } 
        
    }
};