class Solution:
    def shortestCompletingWord(self, licensePlate: str, words: List[str]) -> str:
        def char_count(word: str):
            arr = [0] * 26
            for c in word:
                if c.isalpha():
                    arr[ord(c.lower()) - ord("a")] += 1
            return arr

        license_count_arr = char_count(licensePlate)
        result = None

        for word in words:
            word_count_arr = char_count(word)
            if all(word_count_arr[i] >= license_count_arr[i] for i in range(26)):
                if result is None or len(word) < len(result):
                    result = word

        return result
