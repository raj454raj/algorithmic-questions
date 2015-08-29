str=raw_input()
arr = ['A', 'H', 'I', 'M', 'O', 'T', 'U', 'V', 'W', 'X', 'Y']
if str==str[::-1]:
	flag=0
	for i in str:
		if arr.__contains__(i)==False:
			flag=1
			break
	if flag==1:
		print "NO"
	else:
		print "YES"
else:
	print "NO"
