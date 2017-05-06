# 350111
# a3_p10.py
# Moeez Ahmed
# moe.ahmed@jacobs-university.de

n=int(input("Enter an integer n: "))
m=int(input("Enter an integer m: "))
c=str(input("Enter a character c : "))
def print_frame(n,m,c):
    print(c*m)
    for z in range (1,n-1):
        print(c + ' '*(m-2)+c)
    print(c*m)
print_frame(n,m,c)

