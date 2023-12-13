public class Solution {
    public int FindNumbers(int[] nums) {
        var result = 0;
        for (var i = 0; i < nums.Length; i++)
        {
            var str = nums[i].ToString();
            if (str.Length % 2 == 0)
            {
                result++;
            }
        }

        return result; 
    }
}