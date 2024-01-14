#print the below
# 1
# 2 3
# 4 5 6
# 7 8 9 10
n= int(input())
i=0
y=1
while i<n:
    j=0
    while j<=i:
        print(y, end=" ")
        y=y+1
        j=j+1
    print()
    i=i+1


    #congo