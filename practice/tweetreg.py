import re
n = input()
count = 0
for i in xrange(n):
    line = raw_input()
    t = re.search("hackerrank", line, re.I)
    try:
        t.group()
        count += 1
    except AttributeError:
        pass
print count
