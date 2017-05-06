#350111
#a3.p3-10.py
#Jaeho Shin
#j.shin@jacobs-university.de

m = int(input("Enter an integer: "))
n = int(input("Enter another integer: "))
c = input("Enter a character: ")
def print_frame(n, m, c):
    print (m*c)
    for n in range(1, n-1):
        print(c, end ="")
        print((m-2)*'  ', end = "")
        print(c)
    print(m*c)
print_frame(n,m,c)