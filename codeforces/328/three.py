from fractions import gcd
tmp = raw_input()
tmp = tmp.split(" ")
t = int(tmp[0])
w = int(tmp[1])
b = int(tmp[2])
g = gcd(w, b)
tmp = min(w, b)
l = (w * b) // gcd(w, b)
al = t // l
num = 0
num += (tmp * al) + min(tmp - 1, t - l * al)
tmpg = gcd(num, t)
a = num // tmpg
b = t // tmpg
if a > b:
    print "1/1"
else:
    print str(a) + "/" + str(b)
