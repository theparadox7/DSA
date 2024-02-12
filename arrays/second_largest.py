arr = [0]*7
for i in range(0,7):
    ele = int(input("Enter"))
    arr.append(ele)

largest = arr[0]
for i in range(1,len(arr)):
    if arr[i] > largest:
        largest = arr[i]

#second largest
sec_largest = -1
for i in range(0,len(arr)):
    if arr[i]>sec_largest and arr[i]<largest:
        sec_largest = arr[i]

print(sec_largest)


#big o of 2n