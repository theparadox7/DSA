#print the following
# 1 2 3
# 4 5 6
# 7 8 9

n =int(input("Enter a num"))
i=0
y=1
while i< n:
    j=1
    while j<=n:
        print(y,end=" ")
        y=y+1
        j=j+1
    print()
    i=i+1