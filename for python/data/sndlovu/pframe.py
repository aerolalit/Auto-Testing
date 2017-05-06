#350111
#a3_p10.py
#Sicelesile Ndlovu
#s.ndlovu@jacobs-university.de


#create the function to create the frame
#make sure the parameters are included
def print_frame(n,m,c):
    print(m*c)
    for n in range (1,n-1):
        print(c , end="")
        print((m-2)*' ',end="")
        print(c)
    print(m*c)
		

#get the input from the user
n = int(input("Enter an integer:"))
m = int(input("Enter a second integer:"))
c = input("Enter a character:")

#call the function to print the frame
#pass the arguments n, m and c
print_frame (n,m,c)

