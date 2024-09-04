## swping


my_array = [12,34,554,32,32,12,3434,54,32,32,323,2]
n = len(my_array)

for i in range(n):
    min_index = i
    for j in range(i+1 , n):
        if my_array[j] < my_array[min_index]:
            min_index = j
    my_array[i] , my_array[min_index] = my_array[min_index] , my_array[i]
    
print("the sorted array is: " , my_array)    
    
    
    
        
        