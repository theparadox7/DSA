#convert decimal to binary


n = int(input("Enter the number to be converted"))
i=0
ans =0
while n != 0:
    b= n & 1
    ans = (b*pow(10,i))+ans
    n = n>>1
    i=i+1
print(ans)
print(ans)
