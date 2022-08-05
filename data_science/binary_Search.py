input_list=input("Enter list of elements separated by spaces : ").split(' ')
for i in range(len(input_list)):
               input_list[i]=int(input_list[i])
input_list.sort()
search_element = int(input("Enter search element  :"))
print(input_list)
high=len(input_list)-1
low=0
mid= (high + low)//2
flag = False
while low <= high :
    print(input_list[low:mid],input_list[mid],input_list[mid+1:high])
    mid = (high + low) // 2

    # If search element is greater
    if input_list[mid] < search_element:
        low = mid+1
    # If search element is smaller
    elif input_list[mid] > search_element:
        high = mid -1

    # if search element is present at mid
    else:
        flag=True
        break

if(flag==False):
    print(search_element," is not found in the given list ")
else:
    print(search_element," is found at the position ",mid)


