#include <iostream>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n, const char* name) {
    cout << "Nhap so luong phan tu cua mang " << name << " (n): ";
    cin >> n;
    cout << "Nhap cac phan tu cua mang tang dan " << name << ":" << endl;
    for (int i = 0; i < n; i++) {
        cout << name << "[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Bài 18: Nối 2 mảng tăng dần thành 1 mảng tăng dần
void noiHaiMangTang(int a[], int na, int b[], int nb, int c[], int &nc) {
    nc = na + nb;
    int i = 0; // Chỉ số duyệt mảng a
    int j = 0; // Chỉ số duyệt mảng b
    int k = 0; // Chỉ số duyệt mảng c
    
    // So sánh từng phần tử của a và b, phần tử nào nhỏ hơn thì cho vào mảng c
    while (i < na && j < nb) {
        if (a[i] < b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    
    // Đưa các phần tử còn lại của mảng a vào c (nếu có)
    while (i < na) {
        c[k++] = a[i++];
    }
    
    // Đưa các phần tử còn lại của mảng b vào c (nếu có)
    while (j < nb) {
        c[k++] = b[j++];
    }
}

int main() {
    int a[MAX], b[MAX], c[2 * MAX];
    int na, nb, nc;
    
    nhapMang(a, na, "A");
    nhapMang(b, nb, "B");
    
    noiHaiMangTang(a, na, b, nb, c, nc);
    
    cout << "Mang C sau khi noi hai mang tang dan A va B: ";
    xuatMang(c, nc);
    
    return 0;
}
