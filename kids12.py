n = int(input("enter a number: "))
 
t= n
r = 0
while t != 0:
    r = (r * 10) + (t % 10)
    t = t // 10
if n == r:
    print("number is palindrome")
else:
    print("number is not palindrome")
