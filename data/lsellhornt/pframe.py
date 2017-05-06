# JTSK-350111
# a3_p10.py
# Lily Sellhorn-Timm
# l.sellhorn-timm@jacobs-university.de

n=int(input("Length of rectangle: "))
m=int(input("Width of rectangle: "))
c=input("Enter a character: ")

def print_rectangle(n, m, c):
    print (m*c)
    for a in range(n-2):
        print (c+' '*(m-2)+c)
    print (m*c)
print_rectangle(n, m, c)
