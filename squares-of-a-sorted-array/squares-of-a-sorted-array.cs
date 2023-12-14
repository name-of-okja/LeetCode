public class Solution {
    public int[] SortedSquares(int[] nums) {
        var result = new int[nums.Length];
        var left = 0;
        var right = nums.Length - 1;
        for (var i = nums.Length - 1; i >= 0; i--)
        {
            if (Math.Abs(nums[left]) > Math.Abs(nums[right]))
            {
                result[i] = nums[left] * nums[left];
                left++;
            }
            else
            {
                result[i] = nums[right] * nums[right];
                right--;
            }
        }
        return result;
    }
}