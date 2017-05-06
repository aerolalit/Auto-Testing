# 350111
# a3.p10.py
# Ahmad Saeed
# ah.saeed@jacobs-university.d
def print_frame(n,m,c):
    print(m*c)
    for n in range (1,n-1):
        print(c , end="")
        print((m-2)*' ',end="")
        print(c)
    print(m*c)
n=int(input("Enter rows: "))
m=int(input("Enter columns: "))
c=input("Give a character: ")
print_frame(n,m,c)
