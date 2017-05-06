#350111
#a3_p1.py
#Gorazd Trajkoski
#gtrajkoski@jacobs-university.de

n=int(input("Please enter an integer for width:"))
m=int(input("Please enter an integer for length:"))
c=input("Please enter a character:")

def print_frame(n,m,c):
    print(c*n)
    for a in range (1, m-1):
        print(c, ' ' *(n-4), c, "")
    print(c*n)
print_frame(n,m,c)
