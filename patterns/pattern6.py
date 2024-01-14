# print the following
# 1
# 2 1
# 3 2 1
# 4 3 2 1


i=0
n=(int(input()))
while i < n:
    j=0
    while j<=i:
        print(i-j+1, end=" ")
        j=j+1
    print()
    i=i+1

#congo