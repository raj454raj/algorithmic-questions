m = int(raw_input())
x = raw_input()
x = x.split(" ")
mainarr = x
mainarr = set(mainarr)
n = int(raw_input())
count = 0
for i in xrange(n):
    x = raw_input()
    x = x.split(" ")
    x = set(x)
    if x.issuperset(mainarr):
        count += 1
print count
