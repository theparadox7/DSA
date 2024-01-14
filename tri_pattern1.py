#print the following
# *
# * *
# * * *
# * * * *

n =int(input("Enter a num"))
i=0
while i< n:
    j=0
    while j<=i:
        print('*',end=" ")
        j=j+1
    print()
    i=i+1