class Solution:
    def isHappy(self, n: int) -> bool:
        s=set()
        while(True):
            if(n in s):
                return False
            else:
                s.add(n)
            if(n==1):
                return True
            square=0 
            k=n
            while(k>=1):
                square+=(k%10)**2
                k//=10
            n=square
