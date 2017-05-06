#350111
#a3_p10.py
#Popa Virgil Alin
#al.popa@jacobs-university.de
def print_frame( n, m, c):
    for i in range(n):
        for j in range(m):
            if 0 < i < n-1 and 0 < j < m-1:
                print(" ", end="")
            else:
                print(c, end="")
        print("")
n = int(input("Insert the integer n:"))
m = int(input("Insert the integer m:"))
c = input("Insert the character:")
print_frame( n, m, c)
