inp = int(raw_input())
test = raw_input()
import operator
d = {}

def comp(a, b):
    if a[1][0] == b[1][0]:
        return a[1][1] < b[1][1]
    return a[1][0] < b[1][0]
test = test.split(" ")
index = 0
for i in test:
    try:
        d[i][0] += 1
    except:
        d[i] = [1, index]
    index += 1
l = []
for i in d:
    l.append((i, d[i][0], d[i][1]))

x = sorted(l, key=lambda el: (el[1], -el[2]), reverse = True)
for i in x:
    print i[0], i[1]
