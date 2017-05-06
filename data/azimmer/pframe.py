#350111
#a3_p10.py
#Anna-Kristina Zimmer
#a.zimmer@jacobs-university.de

n=int(input("Introduce the first dimension:"))
m=int(input("Introduce the second dimension:"))
c=input("Introduce the character")

def print_frame(n,m,c):
    for i in range(n):
        for j in range(m):
            if 0<i<n-1 and 0<j<m-1:
                print(" ",end="")
            else:
                print(c,end="")
        print("")

print_frame(n,m,c)
