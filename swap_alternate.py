arr = [0,1,2,3,4,5,6]
for i in range(0,len(arr),2):
    if i+1 < len(arr):
        arr[i],arr[i+1] = arr[i+1],arr[i]

print(arr)