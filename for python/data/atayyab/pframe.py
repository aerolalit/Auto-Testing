5#350111
#a3.p10.py
#Abdullah Tayyab
#a.tayyab@jacobs-university.de


def printxrectangle(n,m,c):
    for i in range(1):
        print(c*m)
        for j in range(n-2):
            a = " "
            b = m -2
            d = str(a*b)
            print(c + d + c)
        print(c*m)
        
n = int(input("Please input a number: \n"))
m = int(input("Please input another number: \n"))
c = str(input("Please input a character: \n"))

printxrectangle(n,m,c)

