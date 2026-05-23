#include <iostream>
#include <algorithm>
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

void xuatMaTran(int a[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

// Bài 4: Sắp xếp theo thứ tự zigzag
void sapXepZigZag(int a[MAX][MAX], int m, int n) {
    int tam[MAX * MAX];
    int k = 0;
    
    // Đưa ma trận vào mảng 1 chiều
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tam[k++] = a[i][j];
             
    // Sắp xếp mảng 1 chiều tăng dần
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (tam[i] > tam[j]) {
                swap(tam[i], tam[j]);
            }
        }
    }
    
    // Đưa ngược lại ma trận theo dạng zigzag
    k = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) { // Dòng chẵn: chạy từ trái sang phải
            for (int j = 0; j < n; j++) a[i][j] = tam[k++];
        } else {          // Dòng lẻ: chạy từ phải sang trái
            for (int j = n - 1; j >= 0; j--) a[i][j] = tam[k++];
        }
    }
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran truoc khi sap xep zigzag:" << endl;
    xuatMaTran(a, m, n);
    
    sapXepZigZag(a, m, n);
    
    cout << "Ma tran sau khi sap xep zigzag:" << endl;
    xuatMaTran(a, m, n);
    
    return 0;
}
