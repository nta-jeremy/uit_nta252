#include <iostream>
using namespace std;

#define MAX 100

void nhapMaTran(int a[MAX][MAX], int &m, int &n) {
    cout << "Nhap so dong m: "; cin >> m;
    cout << "Nhap so cot n: "; cin >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }
}

// Bài 3: Tìm phần tử Min, Max
void timMinMax(int a[MAX][MAX], int m, int n) {
    int max_val = a[0][0];
    int min_val = a[0][0];
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] > max_val) max_val = a[i][j];
            if (a[i][j] < min_val) min_val = a[i][j];
        }
    }
    cout << "Gia tri lon nhat (Max): " << max_val << endl;
    cout << "Gia tri nho nhat (Min): " << min_val << endl;
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    timMinMax(a, m, n);
    return 0;
}
