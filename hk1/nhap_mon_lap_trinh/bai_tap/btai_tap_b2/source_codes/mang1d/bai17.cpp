#include <iostream>
#include <math.h>
using namespace std;

#define MAX 100

void nhapMang(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Bài 17: Tách mảng
bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void tachMang(int a[], int n, int b[], int &nb, int c[], int &nc) {
    nb = 0; // Số lượng phần tử mảng b (nguyên tố)
    nc = 0; // Số lượng phần tử mảng c (còn lại)
    
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            b[nb++] = a[i]; // Đưa vào mảng b và tăng nb lên
        } else {
            c[nc++] = a[i]; // Đưa vào mảng c và tăng nc lên
        }
    }
}

int main() {
    int a[MAX], b[MAX], c[MAX];
    int n, nb, nc;
    nhapMang(a, n);
    
    tachMang(a, n, b, nb, c, nc);
    
    cout << "Mang B (cac so nguyen to): ";
    xuatMang(b, nb);
    cout << "Mang C (cac so con lai): ";
    xuatMang(c, nc);
    
    return 0;
}
