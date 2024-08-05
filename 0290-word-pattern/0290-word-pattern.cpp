class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        // 패턴은 패턴일뿐 aa 나 bb 똑같이 바라본다는 접근으로 하면
        // 문제를 해결 할 수 있음
        stringstream ss(s);
        string w;
        unordered_map<string, char> m1;
        unordered_map<char, char> m2;

        string s1, s2;

        char i = 'a';
        while (ss >> w)
        {
            if (m1.find(w) == m1.end())
            {
                m1[w] = i++;
            }

            s1.push_back(m1[w]);
        }

        i = 'a';
        for (auto &it : pattern)
        {

            if (m2.find(it) == m2.end())
            {
                m2[it] = i++;
            }

            s2.push_back(m2[it]);
        }

        return s1 == s2;
    }
};