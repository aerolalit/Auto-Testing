# 350111
# a3 p10.py
# Berk Dikici
# b.dikici@jacobs-university.de

def print_rectangle(n,m,ch):
    for i in range(m):
        for j in range(n):
            if i == 0 or i == m-1 or j == 0 or j == n-1:
                print(ch,end ="")
            else:
                print(end = " ")
        print("")

n = int(input("Enter width: "))
m = int(input("Enter height: "))
ch = input("Enter character: ")
print_rectangle(n,m,ch)
