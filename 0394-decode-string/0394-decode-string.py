class Solution:
    def decodeString(self, s: str) -> str:
        repeat_buffer = []
        string_buffer = []

        current_count = 0
        current_string = ""

        for c in s:
            if c.isdigit():
                current_count = current_count * 10 + int(c)
            elif c == "[":
                repeat_buffer.append(current_count)
                string_buffer.append(current_string)
                current_count = 0
                current_string = ""
            elif c == "]":
                repeat_count = repeat_buffer.pop()
                prev_string = string_buffer.pop()
                current_string = prev_string + (current_string * repeat_count)
            else:
                current_string += c

        return current_string