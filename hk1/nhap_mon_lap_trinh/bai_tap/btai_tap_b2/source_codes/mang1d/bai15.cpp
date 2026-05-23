#include <iostream>
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

// Bài 15: Kiểm tra mảng đối xứng
bool kiemTraDoiXung(int a[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (a[i] != a[n - 1 - i]) {
            return false; // Nếu phần tử đầu và cuối khác nhau -> không đối xứng
        }
    }
    return true;
}

int main() {
    int a[MAX];
    int n;
    nhapMang(a, n);
    
    if (kiemTraDoiXung(a, n)) {
        cout << "Mang vua nhap la mang doi xung." << endl;
    } else {
        cout << "Mang vua nhap khong phai mang doi xung." << endl;
    }
    return 0;
}
