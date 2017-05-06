# jtsk-350111
# problem 3.8.py
# aditya dandekar
# a.dandekar@jacobs-university.de

def print_rectangle(n: int, m: int, c: str) -> str:
    for i in range(0, n):
        for j in range(0, m):
            if i == 0 or i == n-1:
                print(c, end='')
            elif j == 0 or j == m-1:
                print(c, end='')
            else:
                print(' ', end='')
        print()

n = int(input())
m = int(input())
c = input()[0]
print_rectangle(n, m, c)
