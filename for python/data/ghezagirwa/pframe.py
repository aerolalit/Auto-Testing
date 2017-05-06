#350111
#a3_p10.py
#Ghyslain Hezagirwa
#Ghezagirwa@jacobs-university.de

print("Printing a frame")
n=int(input("Please enter the length of your frame: "))
m=int(input("Please enter the width of your frame: "))
c=input("Please enter the character for your frame: ")
def print_frame(n, m, c):
    print(n*c)
    for x in range(1,m-1):
        print(c," "*(n-4),c)
    print(n*c)
print_frame(n, m, c)
