public class Solution {
    public int RemoveElement(int[] nums, int val) {
        var len = nums.Length;

        for (var i = 0; i < len; i++)
        {
            if (nums[i] == val)
            {
                // i =2 len = 7 
                do
                {
                    if (i == len - 1)
                    {
                        return len - 1;
                    }
                    nums[i] = nums[len - 1];
                } while (nums[len-- - 1] == val);

            }
        }
        
        return len;
    }
}