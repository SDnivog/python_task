list=[]
n= int(input())
for i in range(0,n):
    if (i%7==0):
        list.append(str(i))
print (','.join(list))
