# JTSK-350111
# Problem 3.10 py
# Fanlin Wang
# f.wang@jacobs-university.de

def print_rectangle(n,m,c):
    for i in range(n):
        for j in range(m):
            if (i == 0 or i == n-1 or j == 0) and (j != m-1):
                print (c, end = "")
            elif (j == m-1):
                print (c)
            else:
                print(" ",end = "")

n = input("Enter an int ")
n = int(n)
m = input("Enter an int:")
m = int(m)
c = input("Enter a character:")
print_rectangle(n,m,c)
