class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int a = 0, b = 0;
        // 기본적으로 a,b는 같이 움직이다가 0을 만나면 b가 먼저 0이 아닌 값까지 간 뒤 swap
        while (b < nums.size())
        {
            if (nums[b] != 0)
            {
                swap(nums[a], nums[b]);
                a++;
            }
            b++;
        }
    }
};