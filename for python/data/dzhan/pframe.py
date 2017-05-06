# 350111
# a3_p10.py
# Dazhi Zhan
# d.zhan@jacobs-university.de
x = input('please enter the length ')
x = int(x)
y = input('please enter the width ')
y = int(y)
z = input('please enter a character ')
z = str(z)
def print_frame(n, m, c):
    i = 1
    while i <= n:
        if i == 1:
            print(c * m)
        elif i == n:
            print(c * m)
        else:
            print(c + (m - 2) * ' ' + c)
        i = i + 1
print_frame(x, y, z)            
