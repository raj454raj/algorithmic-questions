import json
import re
from StringIO import StringIO

a = eval(raw_input())
b = eval(raw_input())

tmplist = []
for i in a:
    if a[i] != b[i]:
        tmplist.append(i)
print ":".join(tmplist)
