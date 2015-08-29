str=raw_input()
str=str.split(" ")
count=0
for i in xrange(0,int(str[0])):
	x=raw_input()
	if(int(x)%int(str[1])==0):
		count+=1
print count

