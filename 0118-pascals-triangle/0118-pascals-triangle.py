class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result = []

        for i in range(numRows):
            addArray = [1]

            for j in range(i):
                arr = result[i - 1]
                # last index
                val = 1 if j == i - 1 else arr[j] + arr[j + 1]
                addArray.append(val)

            result.append(addArray)
        return result
