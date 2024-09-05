def partition(arr , low , high):
    pivot = arr[high]
    i = low - 1
    for j in range(low , high):
        if arr[j] < pivot:
            i +=1
            arr[i] , arr[j] = arr[j] , arr[i]
            
    arr [i+1] , arr[high] = arr[high] , arr[i+1]
    return i+1

def quicksort(array, low=0, high=None):
    if high is None:
        high = len(array) - 1

    if low < high:
        pivot_index = partition(array, low, high)
        quicksort(array, low, pivot_index-1)
        quicksort(array, pivot_index+1, high)
        


my_array = [92,74,43,32,21,22,1,7]
quicksort(my_array)
print("Sorted array:", my_array) 
              
        
              
            
