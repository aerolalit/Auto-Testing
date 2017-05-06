# 350111
# a3 p10.py
# Priyanka Sharma
# pr.sharma@jacobs-university.de

n=int(input("Enter width:"))
m=int(input("Enter a height:"))
c=input("Enter a character:")
def print_rectagle(n,m,ch):
    for i in range(m):
        for j in range(n):
            if i == 0 or i == m-1:
                print (ch, end = '')
            elif j == 0 or j ==n-1:
                print (ch, end='')
            else:
                print(' ', end='')            
        print('')
print_rectagle(n,m,c)
