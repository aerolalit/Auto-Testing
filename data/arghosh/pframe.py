# 350111
# a3_p9.py
# Arijit Ghosh
# ar.ghosh@jacobs-university.de

def print_rectangle(n, m, c):
        for i in range(0, n):
                print("")
                if (i==0) or (i==n-1):
                   for j in range(0, m):
                       print (c,end='')
                else:
                
                    for k in range(0, m):
                        if (k==0) or (k==m-1):
                            print(c,end='')
                        else:
                            print(" ", end='')
                            
n=int(input("Enter the length of the rectangle="))
m=int(input("Enter the breadth of the rectangle="))
c=input("Enter any character of your choice=")
print_rectangle(n, m, c)
