#include <iostream>
#include <string.h>
using namespace std;

// Hàm đếm số lần xuất hiện của một ký tự trong chuỗi
// Đầu vào: chuỗi s, ký tự c cần đếm
// Đầu ra: Số lần ký tự c xuất hiện
int demKyTu(char s[], char c) {
    int count = 0, len = strlen(s); // count: biến đếm, len: độ dài chuỗi
    // Duyệt qua tất cả ký tự trong chuỗi
    for (int i = 0; i < len; i++) {
        // Nếu ký tự tại vị trí i giống với c thì tăng count lên 1
        if (s[i] == c) count++;
    }
    return count; // Trả về tổng số lần đếm được
}

int main() {
    char s[100], c;
    cin.getline(s, 100); // Nhập chuỗi
    cin >> c;            // Nhập ký tự cần đếm
    // Gọi hàm đếm và in kết quả ra
    cout << demKyTu(s, c) << endl;
    return 0;
}
