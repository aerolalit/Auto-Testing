# Alexandru Maiereanu
# a.maiereanu@jacobs-university.de
# a3_10.py

def print_frame(n, m, ch):
    for i in range(0, n):
        for j in range(0, m):
            if (i == 0 or j == 0 or i == n-1 or j == m - 1):
                print(ch, end = "")
            else:
                print(" ", end = "")
        print("")    

n = int(input("Enter the first dimension of the rectangle: "))
m = int(input("Enter the second dimension of the rectangle: "))
ch = input("Enter the character: ")
print_frame(n, m, ch)