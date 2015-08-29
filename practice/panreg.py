import re
n = input()
for i in xrange(n):
    line = raw_input()
    try:
        t = re.search("[A-Z][A-Z][A-Z][A-Z][A-Z]\d\d\d\d[A-Z]", line)
        t.group()
        print "YES"
    except AttributeError:
        print "NO"
