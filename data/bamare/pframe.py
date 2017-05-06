#350111
#a3_p10.py
#Biruk Amare
#b.amare@jacobs-university.de

n = int(input("Enter the length:"))
m = int(input("Enter the width:"))
c = input("Enter the character c:")

inner_space = n-2

def print_frame(n,m,c):
    for i in range (0,m):
        if i==0 or i==m-1:
            print(n*c)
        else:
            print(c + " "*inner_space + c)
            
print_frame(n,m,c)
