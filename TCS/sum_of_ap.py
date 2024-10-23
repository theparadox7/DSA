list = []
n = int(input("Ener the number of elements\n"))

for i in range(0,n):
    ele = int(input())
    list.append(ele)
    
print(list)

diff = list[1]-list[0]
print(diff)

m = int(input("Ente the m value to find sum"))
sum = list[0]
for i in range(1,m):
    ne = list[i-1]+diff
    sum += ne
    
print(sum)