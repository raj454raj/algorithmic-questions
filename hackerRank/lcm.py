def gcd(a, b):
    while b:      
        a, b = b, a % b
    return a

def lcm(a, b):
    return a * b // gcd(a, b)

def lcmm(*args):
    return reduce(lcm, args[0])

if __name__ == '__main__':
    t=input()
    while t:
        n=input()
        print lcmm(tuple(range(1,n+1)))
        t-=1
