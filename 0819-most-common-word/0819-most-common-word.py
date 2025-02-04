class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:

        normalized_text = re.findall(r"\b\w+\b", paragraph.lower())
        words = [word for word in normalized_text if word not in banned]

        word_count_board = collections.Counter(words)

        return word_count_board.most_common(1)[0][0]