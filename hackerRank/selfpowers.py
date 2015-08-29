n=input()
sum=0
for i in xrange(1,n+1):
    sum = ((sum)+ pow(i,i,10**10))%(10**10)
print sum
