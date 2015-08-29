import math
N=input()

for i in xrange(N, 0, -1):
    s=0
    for j in str(i):
        s+=math.factorial((int)(j))
    if s%i==0:
        print N, i
        break
    
