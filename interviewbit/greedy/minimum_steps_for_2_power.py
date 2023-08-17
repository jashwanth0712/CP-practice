def findMinimumSteps(N):
    num = str(N)
    c = 1
    a = []
    while True:
        if (c > 10 ** 20):
            break
        a.append(str(c))
        c = c * 2
    best = len(num) + 1
    for x in a:
        position = 0
        for i in range(len(num)):
           
            if position < len(x) and x[position] == num[i]:
                position += 1
        best = min(best, len(x) + len(num) - 2 * position)
         
    print(best)
for i in range(int(input())):     
	n=int(input())
	findMinimumSteps(n)
				
