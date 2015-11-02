tmp = raw_input()
tmp = tmp.split(" ")
n = int(tmp[0])
t = int(tmp[1])
i = 10**(n-1)
if n == 1:
    if t == 10:
        print -1
    else:
        print t
elif n == 2:
    if t==1 or t==2 or t==5 or t==10:
        print 10
    elif t == 3 or t==4 or t == 6:
        print 12
    elif t == 7:
        print 14
    elif t==8:
        print 16
    elif t==9:
        print 18
else:
    if n == 3 and t==8:
        print 104

    elif t==1 or t==2 or t==5 or t==4 or t==8 or t==10:
        print 10**(n-1)
    elif t == 3 or t == 6:
        print 10**(n-1) + 2
    elif t == 9:
        print 10**(n-1) + 8
    elif t == 7:
        i = 10**(n - 1)
        while True:
            if i % 7 == 0:
                print i
                break
            i += 1
