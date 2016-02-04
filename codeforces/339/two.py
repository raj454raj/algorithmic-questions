import math
t = input()
x = raw_input().split(" ")
s = 0
flag = 0
only = -1
for i in x:
    n = int(i)
    if n == 0:
        flag = 1
        break
    tmp = math.log10(n)
    if tmp == int(tmp):
        s += int(tmp)
    else:
        only = n

if flag:
    print 0
else:
    if only == -1:
        print "1" + "0" * s
    else:
        print str(only) + "0" * s
