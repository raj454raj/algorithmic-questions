#include<stdio.h>
int min(int a, int b) {
    if(a < b)
        return a;
    return b;
}
int minPathSum(int grid[][5], int gridRowSize, int gridColSize) {
    int i, j;
    for(i = gridRowSize - 1 ; i >= 0 ; i--) {
        for(j = gridColSize - 1 ; j >= 0 ; j--) {
            if(i + 1 != gridRowSize && j + 1 != gridColSize) {
                grid[i][j] = min(grid[i + 1][j], grid[i][j + 1]) + grid[i][j];
            }
            else if(i + 1 != gridRowSize)
                grid[i][j] = grid[i + 1][j] + grid[i][j];
            else if(j + 1 != gridColSize)
                grid[i][j] = grid[i][j + 1] + grid[i][j];
        }
    }
    return grid[0][0];
}

int main() {
    int i;
    int a[4][5] = {{1,3,5,1,1}, {3,1,2,4,8}, {6,7,3,8,7}, {1,4,3,5,4}};
    printf("%d\n", minPathSum(a, 4, 5));
    return 0;
}
