import operator
d = {}
while True:
    t = raw_input()
    if t == "EOF":
        break
    t = t.split(" ")
    if d.has_key(t[8]):
        d[t[8]] += 1
    else:
        d[t[8]] = 1
print sorted(d.items(), key=operator.itemgetter(1), reverse=True)
