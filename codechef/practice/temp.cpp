#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
#define g getchar_unlocked

long long int readnum() {
    long long int n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10*n + c - '0', c = g();
    return n;
}

std::vector<long long> min_heap;
std::vector<long long> max_heap;

int input;

void insert_min(long long val) {
    min_heap.push_back(val);
    long idx = min_heap.size() - 1;
    while(val < min_heap[idx/2]) {
        min_heap[idx] = min_heap[idx/2];
        idx = idx/2;
    }
    min_heap[idx] = val;
}

long long delete_min() {
    long size = min_heap.size() - 1;
    if (size == 0) return -1;
    long long first = min_heap[1];
    long long val = min_heap[size];
    min_heap.pop_back();
    size = size - 1;
    long i, child;
    for(i=1; 2*i <= size; i=child) {
        child = 2*i;
        if (child!=size) {
            if (min_heap[child] > min_heap[child+1]) child++;
        }
        if (min_heap[child] < val) {
            min_heap[i] = min_heap[child];
        } else {
            break;
        }
    }
    min_heap[i] = val;
    return first;
}

void insert_max(long long val) {
    max_heap.push_back(val);
    long idx = max_heap.size() - 1;
    while(val > max_heap[idx/2]) {
        max_heap[idx] = max_heap[idx/2];
        idx = idx/2;
    }
    max_heap[idx] = val;
}

long long delete_max() {
    long size = max_heap.size() - 1;
    if (size == 0) return -1;
    long long first = max_heap[1];
    long long val = max_heap[size];
    max_heap.pop_back();
    size = size - 1;
    long i, child;
    for(i=1; 2*i <= size; i=child) {
        child = 2*i;
        if(child!=size) {
            if(max_heap[child] < max_heap[child+1]) child++; 
        }
        if (max_heap[child] > val) {
            max_heap[i] = max_heap[child];
        } else {
            break;
        }
    }
    max_heap[i] = val;
    return first;
}

void insert_review(long long val) {

    if (input < 3) {
        insert_max(val);
        return;
    }

    long third = input/3;
    long size = min_heap.size() - 1;
    long long temp;

    if (size < third) {
        // can add logic
        if (val > max_heap[1]) {
            insert_min(val);
        }
        else {
            temp = delete_max();
            if (temp != -1) insert_min(temp);
            insert_max(val);
        }
    }
    else {
        // can't add logic
        if (val > min_heap[1]) {
            temp = delete_min();
            insert_min(val);
            if (temp != -1) insert_max(temp);
        } else {
            insert_max(val);
        }
    }
}

long long query() {
    long size = min_heap.size() - 1;
    if (size == 0) return -1;
    return min_heap[1];
}

int main() {

    long long N, i, t;
    long long no, result;
    N = readnum();
    input = 0;

    // Init
    max_heap.reserve(N+2);
    min_heap.reserve(N+2);
    min_heap.push_back(LLONG_MIN);
    max_heap.push_back(LLONG_MAX);

    for(i=0; i<N; i++) {
        t = readnum();
        if (t == 1) {
            input++;
            no = readnum();
            insert_review(no);
        }
        else if (t == 2){
            result = query();
            if (result == -1) {
                printf("No reviews yet\n");
            } else {
                printf("%lld\n", result);
            }
        }
    }
    return 0;
}
