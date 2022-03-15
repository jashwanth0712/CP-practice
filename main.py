class Solution(object):
    def asteroidCollision(self, asteroids):
        
        ''':type asteroids: List[int]
        :rtype: List[int]
    '''
        stack = []
        for num in asteroids:
            element = num
            if element > 0:
                stack.append(element)
            else:
                # left direction
                while len(stack) != 0 and stack[-1] > 0:
                    top_element = stack[-1]
                    # eliminate current node
                    if top_element > -element:
                        element = None
                        break
                    elif top_element == -element:
                        # eliminiate both
                        stack.pop()
                        element = None
                        break
                    else:
                        # eliminate stack top. Then recursive check
                        stack.pop()
                if element:
                    stack.append(element)
        return stack

s = Solution()
print (s.asteroidCollision([5,10,-5])) # []
print (s.asteroidCollision([-2,-1,1,2])) # [-2,-1,1,2]