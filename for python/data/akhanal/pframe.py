#350111
#a3_10.py
#Ashish Khanal
#a.khanal@jacobs-university.de

def print_frame(n,m,c):
    s = " "
    for i in range(1,n+1):
        if i ==1 or i == n:
            print(m*c)
        else:
            print(c+(m-2)*s+c)

            
n = input("Enter a number: ")
m = input("Enter another number: ")
char = input("Enter a char: ")
n = int(n)
m = int(m)
print_frame(n,m,char)
