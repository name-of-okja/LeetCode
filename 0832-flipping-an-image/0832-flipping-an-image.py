class Solution:
    def flipAndInvertImage(self, image: List[List[int]]) -> List[List[int]]:
        l = len(image)
        answer = []

        for y in range(0, l):
            line = image[y][::-1]
            for x in range(0, l):
                line[x] = abs(line[x] - 1)

            answer.append(line)

        return answer
