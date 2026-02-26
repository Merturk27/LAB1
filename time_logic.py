totalseconds=int(input("Enter the number of seconds "))

totalhour = totalseconds // 3600

remainsecond = totalseconds % 3600



totalminute = remainsecond // 60

second = remainsecond % 60

print(totalseconds , "second is " , totalhour , "hours , " , totalminute , "minute , and " , second , "seconds")

