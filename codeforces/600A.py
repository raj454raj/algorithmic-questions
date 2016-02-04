import re

def is_num(x):
    if len(x) == 0:
        return False
    elif x[0] == "0":
        if len(x) == 1:
            return True
        return False
    else:
        try:
            tmp = int(x)
            return True
        except:
            return False

t = raw_input()
t = re.split("[;,]", t)
first = filter(lambda x: is_num(x), t)
second = filter(lambda x: is_num(x) is False, t)
if first == []:
    print "-"
else:
    print "\"" + ",".join(first) + "\""
if second == []:
    print "-"
else:
    print "\"" + ",".join(second) + "\""
