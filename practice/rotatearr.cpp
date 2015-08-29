#include<bits/stdc++.h>
using namespace std;

void rotateArr(int arr[], int n, int d) {
    d = d%n;
    int i = 0;
    int x, tmp=arr[0];
    int start = 0;
    int visited[10]={0};
    while(1) {
        x = arr[(i+d)%n];
        arr[(i+d)%n] = tmp;
        visited[(i+d)%n] = 1;
        tmp = x;
        i = (i+d)%n;
        if(i == start) {
            start++;
            i++;
            tmp=arr[start];
            if(visited[start])
                break;
        }
    }

}
int main() {
    int arr[1] = {0};
    rotateArr(arr, 7, 13);
    return 0;
}

