import re
n = input()
for i in xrange(n):
    line = raw_input()
    try:
        t = re.search("^hackerrank$", line)
        t.group()
        print 0
    except AttributeError:
        try:
            t = re.search("^hackerrank", line)
            t.group()
            print 1
        except AttributeError:
            try:
                t=re.search("hackerrank$", line)
                t.group()
                print 2
            except AttributeError:
                print -1

