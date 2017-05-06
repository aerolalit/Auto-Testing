# 350111
# a3_p10.py
# Ali Naweed
# anaweed@jacobs-university.de

n = int(input("Enter width: "))
m = int(input("Enter length: "))
c = str(input("Enter character: "))
def printxframe(n,m,c):
    emptyspace = ' '
    count = m-4
    print(m*c)
    x=0
    while (x<n-1):
        x+=1
        print(c,emptyspace*count,c)
    print(m*c)
    return    

printxframe(n,m,c)

