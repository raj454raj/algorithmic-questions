t=input()
for i in xrange(t):
    n=input()
    x=str(1<<n)
    count=0
    for j in x:
        count += (int)(j)
    print count
