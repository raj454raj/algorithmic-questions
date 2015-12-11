#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    ll ax, ay, az, bx, by, bz;
    cin >> ax >> ay >> az >> bx >> by >> bz;
    int cx = 0, cy = 0, cz = 0, req;
    if(ax >= bx) {
        cx = (ax - bx) / 2;
        bx = 0;
    }
    else
        bx -= ax;
    if(ay >= by) {
        cy = (ay - by) / 2;
        by = 0;
    }
    else
        by -= ay;
    if(az >= bz) {
        cz = (az - bz) / 2;
        bz = 0;
    }
    else
        bz -= az;
    int total = cx + cy + cz, flag = 0;
    if(bx) {
        if(bx <= total) {
            total -= bx;
        }
        else {
            flag = 1;
        }
    }
    if(by) {
        if(by <= total) {
            total -= by;
        }
        else {
            flag = 1;
        }

    }
    if(bz) {
        if(bz <= total) {
            total -= bz;
        }
        else {
            flag = 1;
        }

    }

    if(!flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}
