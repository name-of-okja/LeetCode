class Solution
{
public:
    int distributeCandies(vector<int> &candyType)
    {
        unordered_set<int> s(candyType.begin(), candyType.end());

        int div = candyType.size() / 2;
        int l = s.size();
        return l > div ? div : l;
    }
};