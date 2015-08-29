#include<stdio.h>
int main() {
    int t, x, y, z;
    long double area, a, b, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d%d", &x, &y, &z);
        a = (z + x - y) / 2.0;
        b = (x + y - z) / 2.0;
        c = (z + y - x) / 2.0;
        area = 2 * (a * b + b * c + c * a);
        printf("%0.2Lf\n", area);
    }
    return 0;
}
