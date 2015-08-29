#a = [-1]*100000
def fib(n):
#    if a[n]!=-1:
#        return a[n]
    if(n==0 or n==1):
#        a[n] = n
        return n
    else:
#        a[n]=fib(n)+fib(n-1)
        return fib(n)+fib(n-1)
#        return a[n]
fib(10)
