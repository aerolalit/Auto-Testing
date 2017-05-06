# 350111
# a3_p10.py
# Steven Abreu
# s.abreu@jacobs-university.de

def print_rectangle(n, m, c):
    for i in range(0,n):
        for j in range(0,m):
            if i == 0 or i == n-1 or j == 0 or j == m-1:
                print(c, end="")
            else:
                print(" ", end="")
        print()

n = int(input("enter rows: "))
m = int(input("enter columns: "))
c = input("enter character: ")[0]

print_rectangle(n,m,c)
