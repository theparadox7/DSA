#print the following
# A B C
# B C D
# C D E
n = int(input("A number "))
i=1
while i <=n:
    j=1
    value = ord('A')+i-1
    while j<=n:
        print(chr(value),end=' ')
        value=value+1
        j=j+1
    i=i+1
    print()