# 350111
# a3_p10.py
# Irakli Mtvarelishvili
# i.mtvarelisvhili@jacobs-university.de

n = int(input("Please enter the length of rectangle: "))
m = int(input("Please enter the width of rectangle: "))

c = chr(ord(input("Please enter a character: ")))

def print_rectangle(n, m, c):
    for i in range(m) :
        for j in range(n):
            if i == 0 or i == m - 1 :
                print(c, end='')
            else :
                if j == 0 or j == n - 1 :
                    print (c, end='')
                else :
                    print (' ', end='')
        print()
    
print(print_rectangle(n, m, c))
