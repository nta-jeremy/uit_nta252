#include <iostream>
using namespace std;

// Hàm tìm Ước Chung Lớn Nhất (UCLN) bằng thuật toán Euclid
int timUCLN(int a, int b) {
    // Vòng lặp chạy cho đến khi phần dư (b) bằng 0
    while (b != 0) {
        int r = a % b; // Tính phần dư
        a = b;         // Gán b cho a
        b = r;         // Gán phần dư cho b
    }
    return a; // Khi b = 0 thì a chính là UCLN
}

// Hàm tìm Bội Chung Nhỏ Nhất (BCNN)
// Công thức: BCNN(a, b) = (a * b) / UCLN(a, b)
int timBCNN(int a, int b) {
    return (a * b) / timUCLN(a, b);
}

int main() {
    int a, b;
    cout << "Nhap 2 so nguyen duong a, b: ";
    cin >> a >> b;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << timUCLN(a, b) << endl;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << timBCNN(a, b) << endl;

    return 0;
}
