#350111
#a3_p10.py
#Juna Kreka
#j.kreka@jacobs-university.de

def print_frame(n, m, c):
    print(c * m)
    for i in range(1, n-1):
        print(c, ' ' * (m-2), c, sep='')
    print(c * m)
n=input("Write an integer:")
n=int(n)
m=input("Write an integer:")
m=int(m)
c=input("Write a character:")
print_frame(n, m, c)


