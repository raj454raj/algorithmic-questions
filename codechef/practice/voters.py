st = raw_input()
s=st.split(" ")
tmp=sum(int(i) for i in s)
main = {}
for i in xrange(0,tmp):
	x=input()
	if main.has_key(x):
		main[x]+=1
	else:
	 	main[x]=1
a=[]
for i in main:
	if main[i]>1:
		a.append(i)
a.sort()
print len(a)
for i in a:
	print i

