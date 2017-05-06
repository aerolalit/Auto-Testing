#a3_p10.py
#Omar Saif Cheema
#o.cheema@jacobs-university

#inputting parameters
m = int (input("Width of Rectangle = "))
n = int (input("Length of Rectangle = "))
c = input("Enter character to print = ")

#function definition
def print_frame(n, m, c):
    row=n*c
    space= int (n-2)
    for i in range(m):
        if i==0 or i==m-1 :
            print (row)
        else:
            print(c," "*space,c)
#function call
print_frame(n,m,c)
