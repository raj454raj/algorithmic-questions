#include<bits/stdc++.h>
#define g getchar_unlocked
#define ll long long int
#define eps 0.000001
using namespace std;
struct point {
    double x, y;
    point(double a, double b): x(a), y(b) {}
};

bool comp(point a, point b) {
    if(abs(a.x - b.x) < eps)
        return a.y < b.y;
    return a.x < b.x;

}
int main() {
    double a1, a2, a3, b1, b2, b3;
    scanf("%lf%lf%lf%lf%lf%lf", &a1, &b1, &a2, &b2, &a3, &b3);
    double x1, x2, x3, y1, y2, y3;
    x1 = a1 + a3 - a2;
    x2 = a1 + a2 - a3;
    x3 = a2 + a3 - a1;
    y1 = b1 + b3 - b2;
    y2 = b1 + b2 - b3;
    y3 = b2 + b3 - b1;
    vector<point> p;
    p.push_back(point(x1, y1));
    p.push_back(point(x2, y2));
    p.push_back(point(x3, y3));

    sort(p.begin(), p.end(), comp);
    printf("%.4lf %.4lf\n%.4lf %.4lf\n%.4lf %.4lf", p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y);

    return 0;
}

