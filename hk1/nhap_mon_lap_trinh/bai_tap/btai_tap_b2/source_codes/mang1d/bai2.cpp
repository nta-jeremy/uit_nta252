#include <iostream>
#include <cstdlib> // Thư viện dùng cho hàm tạo số ngẫu nhiên
#include <ctime>   // Thư viện dùng cho hàm lấy thời gian thực
using namespace std;

#define MAX 100

// Bài 2: Khởi tạo mảng ngẫu nhiên (thay thế cho nhập tay nếu muốn test nhanh)
void khoiTaoMangNgauNhien(int a[], int &n) {
    cout << "Nhap so luong phan tu cua mang (n): ";
    cin >> n;
    srand(time(0)); // Cấp seed cho hàm random dựa trên thời gian thực
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 100; // Random các số từ 0 đến 99
    }
}

// Bài 3: Xuất mảng ra màn hình
void xuatMang(int a[], int n) {
    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int a[MAX];
    int n;
    khoiTaoMangNgauNhien(a, n);
    xuatMang(a, n);
    return 0;
}
