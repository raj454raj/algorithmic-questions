#include<bits/stdc++.h>
#define M 1000000007
#define g getchar_unlocked
#define LL long long int
using namespace std;

struct SegTreeNode {
    LL total, pendingUpdate;
    int start, end;
    SegTreeNode() : total(0), pendingUpdate(0) {}

    void assignLeaf(LL value) {
        total = value;
    }

    void merge(SegTreeNode& left, SegTreeNode& right) {
        total = left.total + right.total;
        if (left.pendingUpdate > 0)
            total += left.pendingUpdate * (left.end - left.start + 1);
        if (right.pendingUpdate > 0)
            total += right.pendingUpdate * (right.end - right.start + 1);
    }

    LL query() {
        return total;
    }

    bool hasPendingUpdate() {
        return pendingUpdate != 0;
    }

    void applyPendingUpdate() {
        total += (end - start + 1) * pendingUpdate;
        pendingUpdate = 0;
    }

    void addUpdate(LL value) {
        pendingUpdate += value;
    }

    LL getPendingUpdate() {
        return pendingUpdate;
    }

};

SegmentTreeNode query(int stIndex, int start, int end) {
    if (nodes[stIndex].start == start && nodes[stIndex].end == end) {
        SegmentTreeNode result = nodes[stIndex];
        if (result.hasPendingUpdate())
            result.applyPendingUpdate();
        return result;
    }

    int mid = (nodes[stIndex].start + nodes[stIndex].end) >> 1,
        leftChildIndex = stIndex << 1,
        rightChildIndex = leftChildIndex + 1;           
    SegmentTreeNode result;

    if (start > mid)
        result = query(rightChildIndex, start, end);
    else if (end <= mid)
        result = query(leftChildIndex, start, end);
    else {
        SegmentTreeNode leftResult = query(leftChildIndex, start, mid),
                        rightResult = query(rightChildIndex, mid+1, end);
        result.start = leftResult.start;
        result.end = rightResult.end;
        result.merge(leftResult, rightResult);
    }

    if (nodes[stIndex].hasPendingUpdate()) {
        result.addUpdate(nodes[stIndex].getPendingUpdate());
        result.applyPendingUpdate();
    }       
    return result;
}

void update(int stIndex, int start, int end, UpdateType value) {
    if (nodes[stIndex].start == start && nodes[stIndex].end == end) {
        nodes[stIndex].addUpdate(value);
        return;
    }

    int mid = (nodes[stIndex].start + nodes[stIndex].end) >> 1,
        leftChildIndex = stIndex << 1,
        rightChildIndex = leftChildIndex + 1;

    if (start > mid)
        update(rightChildIndex, start, end, value);
    else if (end <= mid)
        update(leftChildIndex, start, end, value);
    else {
        update(leftChildIndex, start, mid, value);
        update(rightChildIndex, mid+1, end, value);
    }
    nodes[stIndex].merge(nodes[leftChildIndex], nodes[rightChildIndex]);
}

LL readnum() {
    LL n = 0;
    char c = g();
    while(c < '0' || c > '9') c = g();
    while(c >= '0' && c <= '9') n = 10 * n + c - '0', c = g();
    return n;
}

int getMid(int start, int end) {
    return (start + (end - start) / 2);
}

int main() {
    LL i, n, x, y, v, q, pro;
    n = readnum();
    q = readnum();

    vector<LL> a;
    vector<LL>::iterator it, newit;
    for(i = 0 ; i < n ; i++) {
        x = readnum();
        a.push_back(x);
    }
    vector<LL> tree = constructTree(a, n);
    LL ch, newval;
    while(q--) {
        ch = readnum();
        switch(ch) {
            case 1: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        --x; --y;
                        break;                         
                    }
            case 2: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        break;                         

                    }
            case 3: {
                        x = readnum();
                        y = readnum();
                        v = readnum();
                        break;                         
                    }
            case 4: {
                        x = readnum();
                        y = readnum();
                        break;                         
                    }
            default: cout<<"what";
        }
    }
    return 0;
}
