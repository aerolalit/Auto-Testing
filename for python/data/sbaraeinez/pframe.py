#350111
#a3-p10.py
#shahrzad Baraeinezhad
#s.baraeinezhad@jacobs-university.de
def print_frame(n,m,c):
    line= c*m
    for i in range(n):
        if (i==0)or (i==n-1):
            print (line)
        else:
           print(c,(m-2)*" ",c)
    return
n=int(input("enter integer1:"))
m=int(input("enter integer2:"))
c=(input("enter character:"))
print_frame(n,m,c)
