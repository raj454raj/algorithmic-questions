#include<stdio.h>
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int min(int a, int b) {
    if(a < b)
        return a;
    return b;
}
int max(int a, int b) {
    if(a > b)
        return a;
    return b;
}
int calculate(int A, int B, int C, int D, int E, int F, int G, int H) {
    int area;
    area = (D - B) * (C - A) + (H - F) * (G - E);
    int tmp = (min(C, G) - max(A, E)) * (max(H, F) - min(B, D));
    if((C < E && A < E) || (A > G && C > ))
    if((C <= E && D <= F) || (G <= A && H <=B)) {
        tmp = 0;
    }
    area -= tmp;
    return area;
}

int main() {
    printf("%d", calculate(-2, -2, 2, 2, -4, 3, -3, 4));
    return 0;
}
