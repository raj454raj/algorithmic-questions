import math
t=input()
for i in xrange(t):
    n=input()
    tmp=math.factorial(n)
    count=0
    while tmp:
        count = count + tmp%10
        tmp=tmp/10
    print count



