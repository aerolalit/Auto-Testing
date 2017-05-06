#350111
#a4_p10.py
#Revazi Chikviladze
#r.chikviladze@jacobs-university.de

data = "Python is a great programming language"

#a

count = 0
list = data.split()
for k in list:
    print (list[count])
    count +=1
#b

print(data.upper())

#c

List = data.split()
print (List.index("programming"))

#d

print(data.replace("g", "G"))
