print("enter 1 string")
a=input()
print("enter 2 string")
b=input()
j=0;c=0
if (len(a)==len(b)):
    for i in a:
        if (i==b[j]):
            j+=1
        else:
            j+=1
            c+=1
        if(c>1):
            print("no")
            break
    if(c==1):
        print("yes")
    else:
        print("no")
