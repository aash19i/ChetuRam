a=int(input("enter lower limit"))
b=int(input("enter higher limit"))
c=0
for num in range(a,b+1):
    if num >1:
        for i in range(2,num):
            if(num%i==0):
                break
        else:
            print(num)
