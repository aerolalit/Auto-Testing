#350111
#a3_p10.py
#Alexandru Sasu
#a.sasu@jacobs-university.de
def printframe(n, m, c):
	for j in range(0,m):
		print(c,end="")
	print()
	for i in range (1,n-1):
		print(c,end="")
		for j in range(1,m-1):
			print(" ",end="")
		print(c)
	for j in range(0,m):
		print(c,end="")
	print()
n=int(input())
m=int(input())
c=input()
printframe(n, m, c)
