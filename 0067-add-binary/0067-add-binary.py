class Solution:
    def addBinary(self, a: str, b: str) -> str:
        result = ''
        a_idx, b_idx = len(a) - 1, len(b) - 1
        cnt, carry = max(a_idx, b_idx), 0
        
        while cnt >= 0:
            binary_sum = carry

            if a_idx >= 0:
                binary_sum += int(a[a_idx])
                a_idx -= 1
            if b_idx >= 0:
                binary_sum += int(b[b_idx])
                b_idx -= 1
            
            result += str(binary_sum % 2)
            carry = 1 if binary_sum > 1 else 0 
            
            # 반복문
            cnt -= 1

        # 최상위
        if carry > 0 :
            result += '1'

        return result[::-1]
