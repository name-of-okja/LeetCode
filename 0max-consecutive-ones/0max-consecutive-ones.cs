public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        var max = 0;
        var temp = 0;

        for (int i = 0; i < nums.Length; i++)
        {
            if (nums[i] == 1)
            {
                temp++;
            }
            else
            {
                max = temp > max ? temp : max;
                temp = 0;
            }
        }
        return temp > max ? temp : max;
    }
}