public class Solution {
    public int[] SortedSquares(int[] nums) {
        var result = new int[nums.Length];
        for (var i = 0; i < nums.Length; i++)
        {
            var abs = Math.Abs(nums[i]);

            int pos = 0;

            for (var j = 0; j < nums.Length; j++)
            {
                if (abs > Math.Abs(nums[j]))
                {
                    pos++;
                }
            }
            while (result[pos] != 0)
            {
                pos++;
            }
            result[pos] = abs * abs;
        }


        return result;
    }
}