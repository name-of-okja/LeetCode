class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int pos = 1;
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[pos - 1] != nums[i])
            {
                nums[pos++] = nums[i];
            }
        }
        return pos; 
    }
};