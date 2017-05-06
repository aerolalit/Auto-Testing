#350111
#a3-p10.py
#Gloria Giramahoro
#g.giramahoro@jacobs-university.de
#1.defining a function that prints a rectangle made of a character
def print_frame(n,m,c):
    count = 1
    if (n >= m):
        product1 = n*c
        print (product1)
        for count in range(1,m-1):
            words1 = str(' ')
            words = (n-4)*words1
            print (c,words,c)
            count = count+1
        print (product1)
    else :
        product2 = m*c
        print (product2)
        for count in range(1,n-1):
            words2 = str(' ')
            words = (m-4)*words2
            print (c,words,c)
            count = count+1
        print (product2)
    
#2.inputing 2 integers n and m and a character c
print("enter an integer value of n")
integer1 = input()
n = 4
print("enter an integer value of m")
integer2 = input()
m = 7
print("enter a character value of c")
character = input()
c = '$'
print_frame(n,m,c)





