import math
n = input()
tmp = str(math.factorial(n))
s = reduce(lambda x, y: int(x) + int(y), tmp)
print s
