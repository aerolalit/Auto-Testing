#350111
#a3_p10.py
#Siyuan Chang
#s.chang@jacobs-university.de

n = int(input("Enter an integer:"))
m = int(input("Enter another integer:"))
c = str(input("Enter a character:"))

def print_frame(n,m,c):
    print(m*c+"\n"+(c+" "*(m-2)+c+"\n")*(n-2)+m*c, end = " ")
