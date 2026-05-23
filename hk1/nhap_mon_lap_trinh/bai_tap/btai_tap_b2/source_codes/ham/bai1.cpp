#include <iostream>
#include <math.h>
using namespace std;

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool kiemTraNguyenTo(int so) {
    if (so < 2) return false; // Các số nhỏ hơn 2 không phải là số nguyên tố
    // Chỉ cần kiểm tra đến căn bậc 2 của số đó để tiết kiệm thời gian chạy
    for (int i = 2; i <= sqrt(so); i++) {
        if (so % i == 0) {
            return false; // Nếu chia hết cho một số bất kỳ thì không phải số nguyên tố
        }
    }
    return true; // Nếu qua được vòng lặp thì là số nguyên tố
}

int main() {
    int n;
    cout << "Nhap vao so nguyen duong n: ";
    cin >> n;

    int tong = 0;
    // Duyệt tất cả các số từ 2 đến nhỏ hơn n
    for (int i = 2; i < n; i++) {
        if (kiemTraNguyenTo(i)) {
            tong += i; // Nếu là số nguyên tố thì cộng dồn vào tổng
        }
    }

    cout << "Tong cac so nguyen to nho hon " << n << " la: " << tong << endl;
    return 0;
}
