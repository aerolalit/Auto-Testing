#35011
#a3_p10.py
#Eliuter  Nderimo
#enderimo@jacobs-university.de
def print_rectangle ( n , m ,c) :
       width=print(c*n)
       for m in  range(1,m):
              height=print(c, " "*(n-1),c)
       print(c*n)
       return print_rectangle

while True:
       n=int(input("Enter Width:"))
       m=int(input("Enter Height:"))
       c=str(input("Enter character:"))
       print_rectangle (n , m,c)
