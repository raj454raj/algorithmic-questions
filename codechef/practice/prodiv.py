t = input()
for i in xrange(t):
	pro = 1
	n = input()
	for j in xrange(2, n/2+1,1):
		if n%j == 0:
			pro *= j
	p = pro/10000
	final=pro - p*10000
	if final == 0:
		print "0000"
		continue
	print "%d" %(final)
