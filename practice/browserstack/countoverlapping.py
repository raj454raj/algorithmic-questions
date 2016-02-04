import re
def countoverlappingdistinct(pattern, thestring):
  total = 0
  start = 0
  there = re.compile(pattern)
  while True:
    mo = there.search(thestring, start)
    if mo is None: return total
    total += 1
    start = 1 + mo.start()

q = input()
s = raw_input("String: ")
for i in xrange(q):
    r = raw_input()
    r = r.replace(".", "{2}")
    r = r.replace("+", "{4}")
    r = r.replace("*", "{5,}")
    r = r.replace("(", "[")
    r = r.replace(")", "]")
    print r
    print countoverlappingdistinct(r, s)
