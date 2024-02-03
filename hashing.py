arr =[]
n = int(input())
for i in range(0,n):
    ele = int(input("Enter"))
    arr.append(ele)

hash = [0]*10
for i in range(0,n):
    hash[arr[i]] += 1

