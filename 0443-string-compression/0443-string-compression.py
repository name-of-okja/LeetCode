class Solution:
    def compress(self, chars: List[str]) -> int:
        n = len(chars)
        read = 0
        write = 0
        while read < n:
            char = chars[read]
            size = 0

            while read < n and chars[read] == char:
                read += 1
                size += 1

            chars[write] = char
            write += 1

            if size > 1:
                for c in str(size):
                    chars[write] = c
                    write += 1

        return write