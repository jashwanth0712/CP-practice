


input_list=list(input("Enter list of elements separated by spaces : ").split(' '));
for i in range(len(input_list)):
               input_list[i]=int(input_list[i])
print('List before Insertion Sort : ',input_list)
print("----------------------")
# run an outer loop i from 1 to len(num) to repeat the process of insertion sort
for i in range(1,len(input_list)):

    #selecting an element from the list so that it can be placed in correct position
    x=input_list[i]
    #running insertion sort for i-1 to 0
    j=i-1
    while j>=0:
        if x<input_list[j]:
            input_list[j+1]=input_list[j]
        else:
            break
        j=j-1
        
    input_list[j+1]=x
    print(input_list[:i+1],"|",input_list[i+1:])
print("----------------------")
print('List after Insertion Sort')
for n in input_list:
    print(n,end=' ')


