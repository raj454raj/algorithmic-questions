n=input()
for i in xrange(10,10**7):
    txt=str(i)
    txt=list(txt)
#print txt
    sum=0
    for j in txt:
        j=int(j)
        sum+=j**n
    if sum==i:
        print i
