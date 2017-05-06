#350111
#a3_p10.py
#Alexandru-Mihai Glontaru
#a.glontaru@jacobs-university.de

def print_frame( n, m, c):

    for i in range(n):
        for j in range(m):
            if 0 < i < n-1 and 0 < j < m-1:
                print(" ", end="")
            else:
                print(c, end="")
        print("")

print("Introduce n:")
n = int(input())

print("Introduce m:")
m = int(input())

print("Introduce the character:")
ch = input()

print_frame( n, m, ch)
