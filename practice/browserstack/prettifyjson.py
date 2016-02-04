import json

t = raw_input()
tmp = t.split(",")
print tmp
print json.dumps(eval(t), indent=4, separators=(',', ': '))
