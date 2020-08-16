class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size();

        while(i > 0 && digits[i - 1] == 9)
        {
            digits[i - 1] = 0;
            --i;
        }
        if(i == 0)
        {
            digits.push_back(0);
            digits[0] = 1;
        }
        else{
            digits[i - 1] += 1;
        }        
        return digits;
    }
};