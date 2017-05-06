# 350111
# a3 p10.py
# Tibebu T.Biru
# t.biru@jacobs-university.de

#function definition
def print_frame(n, m, c):
    print(c * m)
    for i in range(1, n - 1):
        print(c, ' ' * (m - 2), c, sep='')
    print(c * m)
""" Basically, we print the first and last lines by using repetition
    which is multiplying the character m-times. Then, for the second 
    and third row, we print one character first and 5 empty spaces
    and one character.
"""
#input values
n = int(input("Enter first integer: "))
m = int(input("Enter second integer: "))
c = input("Enter a character: ")
print_frame(n,m,c)


