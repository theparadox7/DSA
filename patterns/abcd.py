# print all the alphabets using loop
n = int(input("Enter the number of alphabets to be printed "))
for i in range(97,97+n):
    print(chr(i),end=" ")
