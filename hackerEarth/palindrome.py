t=input()

for i in xrange(0,t):
	arr=raw_input()
	arr=arr.split(" ")
#print arr
	count = 0
	for j in xrange(int(arr[0]),int(arr[1])+1):
		tmp=str(j)
		if(tmp==tmp[::-1]):
			count += 1
	print count
