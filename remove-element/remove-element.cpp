class Solution {
public:
    int removeElement(vector<int> &nums, int val)
    {
        int result = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != val)
            {
                result++;
            }
            else
            {
                for (int j = i + 1; j < nums.size(); j++)
                {
                    if (nums[j] != val)
                    {
                        swap(nums[i], nums[j]);
                        result++;
                        break;
                    }
                }
            }
        }
        return result;
    }
};