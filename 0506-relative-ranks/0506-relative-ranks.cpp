class Solution
{
public:
    vector<string> findRelativeRanks(vector<int> &score)
    {
        vector<string> result(score.size());
        vector<int> dumy(score);
        sort(dumy.begin(), dumy.end(), greater<int>());

        unordered_map<int, string> m;
        for (int i = 0; i < dumy.size(); ++i)
        {
            m[dumy[i]] = getRankName(i + 1);
        }

        for (int i = 0; i < score.size(); ++i)
        {
            result[i] = m[score[i]];
        }

        return result;
    }

private:
    string getRankName(int rank)
    {
        if (rank == 1)
        {
            return "Gold Medal";
        }
        if (rank == 2)
        {
            return "Silver Medal";
        }
        if (rank == 3)
        {
            return "Bronze Medal";
        }

        return to_string(rank);
    }
};