def func(n):
    sum = 0
    while n:
        sum += n % 10
        n /= 10
    if sum > 9:
        return func(sum)
    return sum
        
t = int(raw_input())
for i in xrange(t):
    n = int(raw_input())
    sum = 0
    for j in xrange(n):
        s = raw_input()
        x = int(s.split(" ")[0])
        y = int(s.split(" ")[1])
        sum += x * y
    print func(sum)
