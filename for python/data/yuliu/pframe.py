# 350111
# a3_p10.py
# Yufei Liu
# yu.liu@jacobs-university.de

def print_frame(n, m, c):
    for i in range(0, n):
        if i == 0 or i == n - 1: print(m * c)
        else: print(c + (m - 2) * " " + c)

print_frame(int(input("Enter n: ")), int(input("Enter m: ")), input("Enter c: "))