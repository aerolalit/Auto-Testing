#350111
#a3_p10.py
#Muhammad Uzair Rafique Bin Amer
#muh.amer@jacobs-university.de



n = int(input("Enter integer n:"))
m = int(input("Enter integer m:"))
c = input("Enter a character:")
def print_frame(n,m,c):
    for row in range(n):
        if row == 0 or row == n-1:
            print(m*c)
        else:
            print(c + " "*(m-2) + c)
            
print_frame(n,m,c)
