# Online Python compiler (interpreter) to run Python online.
# Write Python 3 code in this online editor and run it.
def check_days(arr, maxweight):
    count = 1
    tempsum = 0

    for i in range(len(arr)):
        tempsum = tempsum + arr[i]
        if tempsum > maxweight:
            count += 1
            tempsum = arr[i]

    return count

def main():
    A = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
    B = 5
    
    sum_=0
    for i in range(len(A)):
        sum_+=A[i]
    print("capacity\tdays")
    for i in range(sum_,A[-1]-1,-1):
        print(i ,"\t\t\t",check_days(A,i))
main()
