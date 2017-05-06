#350011
#a3_p10.py
#Kshitij Singh
#k.singh@jacobs-university.de
x=0
def print_frame(n,m,c):
    print_frame = print(c * n)
print("Input a length for a rectangle:")
n = int(input())
print("Input a breadth for a rectangle:")
m = int(input())
print("Input a character:")
c = input()
for x in range (1, m+1):
    if x==1:
        print_frame(n,m,c)
    elif x<m:
        print(c, " "*(n-4), c)
    elif x==m:
        print_frame(n,m,c)
    x+=1

