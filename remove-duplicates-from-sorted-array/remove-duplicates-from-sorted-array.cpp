class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 1;
        int val = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (val != nums[i])
            {
                val = nums[i];
                nums[pos++] = val;
            }
        }

        return pos; 
    }
};