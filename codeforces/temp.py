l = []
for i in xrange(1000001):
    j = str(i)
    if j.count('0') + j.count('1') == len(j):
        l.append(i)

print len(l)
