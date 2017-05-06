#350111
#a3_p10.py
#Nicoleta Copaci
#n.copaci@jacobs-university.de
def print_frame(n, m, c):
    for i in range(n):
        for l in range(m):
           if i ==0 or l==0 or i==n-1 or l==m-1:
               print(c, end = ' ')
           else:
                print('  ', end='')
           l+=1
        print('\n')
        i+=1
n=input('Enter an integer\n')
n=int(n)
m=input('Enter an integer\n')
m=int(m)
c=input('Enter a character\n')
i=0
l=0

print_frame(n, m, c)
