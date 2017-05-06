#350111
#a3_p10.py
#Xuqi Bai
#x.bai@jacobs-university.de
n=int(input('Please Enter a Number: '))
m=int(input('Please Enter a Number: '))
c=str(input('Please Enter a Character: '))
def print_frame(n, m, c):
    print(m*c)
    for length in range(1, n-1):
        print(c, ' '*(m-4), c)
    print(m*c)
print_frame(n, m, c)

