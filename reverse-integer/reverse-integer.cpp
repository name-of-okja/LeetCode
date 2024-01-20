class Solution {
public:
    int reverse(int x)
    {
        auto numStr = to_string(abs(x));

        std::reverse(numStr.begin(), numStr.end());

        if (stol(numStr) > INT_MAX)
            return 0;

        return x < 0 ? -stoi(numStr) : stoi(numStr);
    }
};