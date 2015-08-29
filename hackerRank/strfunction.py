maindict = {}
max=0
s=raw_input()
for k in xrange(1, len(s)+1):
	for i in xrange(len(s)-k+1):
                if(maindict.has_key(s[i:i+k])):
			maindict[s[i:i+k]]+=1
			if (len(s[i:i+k])*maindict[s[i:i+k]]>max):
				max=len(s[i:i+k])*maindict[s[i:i+k]]
		else:
		     	maindict[s[i:i+k]]=1
			if (len(s[i:i+k])>max):
				max=len(s[i:i+k])


#for i in maindict:
#	if(len(i)*maindict[i]>max):
#		max=len(i)*maindict[i]

print max
