

##define an array 
minarray = [12,34,23,45,566,7,78,989,90,86,5,3,32,1,23,-7,67,6 ]
minval= minarray[0]
for i in minarray:
    if i < minval:
        minval = i
print(minval)    
        