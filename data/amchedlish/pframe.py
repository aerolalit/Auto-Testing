#350111
#a3_p10.py
#Alexander_Mchedlishvili
#a.mchedlish@jacobs-university.de

n=int(input("Enter the width(horizontal): "))
m=int(input("Enter the length(vertical): "))
c="c"

def print_frame(n, m, c):
    row = n * c
    ln = len(row)-2
    for a in range(m):
        if a == 0 or a == (m-1):
            print(row)
        else:
            print("c",ln*" ","c")
print_frame(n, m, c)


        
