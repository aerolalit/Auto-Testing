
"""
350111
a3-p10.py
Farhan Elmi
F.elmi@jacobs-university.de
"""
n=int(input("put an integer here:"))
m=int(input("put the second integer here:"))
c=input("Enter an character here please:")
#how can I make this around the letter not inside the letters

def printrect(n,m,c):
    line = m*c
    inbetween=c+" "*(m-2)+c
    print(line)
    for i in range(n-2):
        print(inbetween)
    print(line)
printrect(n,m,c)


 
