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

// Bài 5: Sắp xếp trôn ốc (xoắn ốc)
void sapXepTronOc(int a[MAX][MAX], int m, int n) {
    int tam[MAX * MAX], k = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            tam[k++] = a[i][j];
            
    // Sắp xếp tăng dần
    for (int i = 0; i < k - 1; i++)
        for (int j = i + 1; j < k; j++)
            if (tam[i] > tam[j]) swap(tam[i], tam[j]);
            
    // Điền vào ma trận dạng xoắn ốc
    k = 0;
    int tren = 0, duoi = m - 1, trai = 0, phai = n - 1;
    while (tren <= duoi && trai <= phai) {
        for (int i = trai; i <= phai; i++) a[tren][i] = tam[k++]; tren++; // Dòng trên
        if (tren > duoi) break; // Check an toàn
        for (int i = tren; i <= duoi; i++) a[i][phai] = tam[k++]; phai--; // Cột phải
        if (trai > phai) break;
        for (int i = phai; i >= trai; i--) a[duoi][i] = tam[k++]; duoi--; // Dòng dưới
        for (int i = duoi; i >= tren; i--) a[i][trai] = tam[k++]; trai++; // Cột trái
    }
}

int main() {
    int a[MAX][MAX];
    int m, n;
    nhapMaTran(a, m, n);
    
    cout << "Ma tran truoc khi sap xep xoan oc:" << endl;
    xuatMaTran(a, m, n);
    
    sapXepTronOc(a, m, n);
    
    cout << "Ma tran sau khi sap xep xoan oc:" << endl;
    xuatMaTran(a, m, n);
    
    return 0;
}
