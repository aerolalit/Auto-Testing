#350111
#a3_p10_m2
#Larissa de Morais
#Ldemrais@jacobs-university.de

def print_frame(n, m, c):
    print(c * m)
    for i in range(1, n - 1):
        print(c, ' ' * (m - 2), c, sep='')
    print(c * m)
print_frame (4,7,"$")

