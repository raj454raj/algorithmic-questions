#include<stdio.h>
#define ull unsigned long long int
ull arr[91];
ull fib(ull n) {
    if(arr[n] != -1)
        return arr[n]; 
    if(n == 0 || n == 1) {
        arr[n] = n;
        return n;
    }
    else {
        arr[n] = fib(n - 1) + fib(n - 2);
        return arr[n];
    }
}

int binary_search(ull x) {
    int beg = 0, last = 99;
    int mid;
    while(beg <= last) {
        mid = last + (beg - last) / 2;
        if(arr[mid] == x)
            break;
        if(arr[mid] > x) {
            last = mid - 1;
        }
        else {
            break;
            beg = mid + 1;
        }
    }
    return mid;
}

int main() {
    int i, t, j;
    ull n, res, prev;
    for(i = 0 ; i < 90 ; ++i)
        arr[i] = -1;
    fib(89);
    for(i = 2 ; i < 90 ; ++i) {
        arr[i - 2] = arr[i];
    }
    scanf("%d", &t);
    while(t--) {
        scanf("%llu", &n);
        i = binary_search(n);
        prev = arr[i];
        for(j = i + 1 ; j < 89 ; ++j) {
            if(arr[j] > n)
                break;
        }
        printf("%d\n", j);
    }
    return 0;
}
