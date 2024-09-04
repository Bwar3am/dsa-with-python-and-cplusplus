my_array = [12,34,3,5,6,56,3,45,5632,21,45,65]

n = len(my_array)

for i in range(n-1):
    for j in range(n-i-1):
        if my_array[j] > my_array[j+1]:
            my_array[j] , my_array[j+1] = my_array[j+1] , my_array[j]
            
            
print(my_array)             