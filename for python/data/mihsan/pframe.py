# 350111
# a3.p10.py
# Muhammad Awais Ihsan
# m.ihsan@jacobs-university.de


def printxframe(n,m,c):
    blank = ' '
    count = m-4
    print(m*c)
    for x in range(0,n-2):
        print(c,blank*count,c)
    print(m*c)
    return    

n = int(input("Enter width: "))
m = int(input("Enter length: "))
c = str(input("Enter character: "))

printxframe(n,m,c)

