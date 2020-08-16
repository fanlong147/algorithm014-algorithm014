class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0;
        int size = nums.size();
        for(int i = 1; i < size; ++i)
        {
            if(nums[i] == nums[i-1]) 
                ++count;
            else
                nums[i - count] = nums[i];             
        }
        return size - count;
    }   
};
