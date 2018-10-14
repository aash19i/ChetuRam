yr=int(input('enter year'))
if yr%100==0: 
       if yr%400==0:
           print ('leap year')
       else:
          print ('not leap year')
else:
       if yr%4==0:
          print ('leap year')
       else:
          print ('not leap year')
