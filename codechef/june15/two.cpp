#include<bits/stdc++.h>
#define INF 1000000002
using namespace std;
struct Point {
    long long int x, y;
};

class Polygon {
    public:
        int index;
        int count;
        int points;
        double area;
        vector<Point> P;
        void addVertices(long long int x, long long int y) {
            Point t;
            t.x = x;
            t.y = y;
            P.push_back(t); 
        }
        Polygon() {
            count = 0;
        }
        ~Polygon() {
            P.clear();
        }
        void polygonArea();
};

void Polygon::polygonArea() {
    double ar = 0.0;
    int i, next;

    for (i = 0 ; i < points; i++) {
        next = (i + 1) % points;
        ar += (P[next].x - P[i].x) * (P[next].y + P[i].y); 
    }
    area = ar * 0.5;
    if(area < 0)
        area = -area;
}

bool compare(Polygon a, Polygon b) {
    return a.area < b.area;
}

bool comp(Polygon a, Polygon b) {
    return a.index < b.index;
}
int main() {
    int t, i, j, n, points, flag;
    long long int x, y;
    vector<Polygon> Poly;
    Polygon temp, max;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        Poly.clear();
        for(i = 0 ; i < n ; i++) {
            scanf("%d", &points);
            Polygon tmp;
            tmp.points = points;
            tmp.index = i;
            for(j = 0 ; j < points ; j++) {
                scanf("%lld%lld", &x, &y);
                tmp.addVertices(x, y);
            }
            tmp.polygonArea();
            Poly.push_back(tmp);
        }
        sort(Poly.begin(), Poly.end(), compare);
        for(i = 0 ; i < n ; i++) {
            Poly[i].count = i;
        }
        sort(Poly.begin(), Poly.end(), comp);
        for(i = 0 ; i < n ; i++) {
            printf("%d ", Poly[i].count);
        }
        printf("\n");
    }
    return 0;
}
