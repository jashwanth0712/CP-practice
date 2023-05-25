class Solution:
	# @param A : integer
	# @return an integer
	def reverse(self, N):
            # Check if the input is negative
        is_negative = False
        if N < 0:
            is_negative = True
            N = abs(N)
        
        # Reverse the digits
        reversed_num = 0
        while N > 0:
            reversed_num = (reversed_num * 10) + (N % 10)
            N = N // 10
        
        # Check for overflow
        if reversed_num > 2**31 - 1:
            return 0
        
        # Restore the sign
        if is_negative:
            reversed_num = -reversed_num
        
        return reversed_num
