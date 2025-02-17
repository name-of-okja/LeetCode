class Solution:
    def buddyStrings(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False

        if s == goal:
            return len(set(s)) != len(s)

        swap_index = []
        for i in range(0, len(s)):
            if len(swap_index) > 2:
                return False

            if s[i] != goal[i]:
                swap_index.append(i)

        return len(swap_index) == 2 and (
            s[swap_index[0]] == goal[swap_index[1]]
            and s[swap_index[1]] == goal[swap_index[0]]
        )
