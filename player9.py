print("enter the lower limit")
l=int(input())
print("enter higher limit")
h=int(input())
c=0
for i in range(l,h+1):
    if i>1:
        for j in range(2,i):
            if i%j==0:
                break
        else:
            c+=1
print(c)
