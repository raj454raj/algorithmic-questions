import re

t = raw_input()
t = t.replace(".", "{2}")
t = t.replace("+", "{4}")
t = t.replace("*", "{5, 10000000}")
print t
