#35011
#a3_p10.py
#Miruthula Ramesh
#mramesh@jacobs-university.de

n = int(input("Enter the width"))
w = int(input("Enter the length"))
c = input("Enter a character")
space=" "
def print_frame(n, w):
    for i in range(n):
        if i == 0 or i == n-1:
            print(w*c)
        else: 
            print(c + space*(w-2) + c)   
print_frame(n,w) 
