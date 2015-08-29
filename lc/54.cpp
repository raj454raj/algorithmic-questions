#include<bits/stdc++.h>
using namespace std;

vector<int> spiralOrder(vector< vector<int> >& matrix) {
    vector<int> a;
    int i, j;
    int matrixRowSize = matrix.size();
    if(matrixRowSize == 0)
        return a;
    int matrixColSize = matrix[0].size();
    int start1 = 0, start2 = 0, end1 = matrixColSize - 1;
    int end2 = matrixRowSize - 1;
    int elements = matrixRowSize * matrixColSize;
    while(1) {
        if(elements == 1) {
            a.push_back(matrix[start1][end1]);
            return a;
        }
        if(end1 < matrixColSize) {
            for(i = start1 ; i < end1 ; i++) {
                a.push_back(matrix[start1][i]);
                --elements;
                if(elements == 0)
                    return a;
            }
        }
        if(end2 < matrixRowSize && end1 < matrixColSize) {
            for(i = start2 ; i < end2 ; i++) {
                a.push_back(matrix[i][end1]);
                --elements;
                if(elements == 0)
                    return a;
            }

            for(i = end1 ; i > start1 ; i--) {
                a.push_back(matrix[end2][i]);
                --elements;
                if(elements == 0)
                    return a;
            }
        }
        if(end2 < matrixRowSize) {
            for(i = end2 ; i > start2 ; i--) {
                a.push_back(matrix[i][start2]);
                --elements;
                if(elements == 0)
                    return a;
            }
        }
        if(start1 >= end1)
            break;
        if(start2 >= end2)
            break;
        start1++;
        start2++;
        end1--;
        end2--;
    }
    return a;
}

int main() {
    int i;
    vector< vector<int> > m;
    vector<int> tmp;
    tmp.push_back(1);
    m.push_back(tmp);
    /*tmp.push_back(2);
    tmp.push_back(3);
    m.push_back(tmp);
    tmp.clear();
    tmp.push_back(4);
    tmp.push_back(5);
    tmp.push_back(6);
    m.push_back(tmp);
    tmp.clear();
    tmp.push_back(7);
    tmp.push_back(8);
    tmp.push_back(9);
    m.push_back(tmp);
    */vector<int> a = spiralOrder(m);
    for(i = 0 ; i < a.size() ; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
