#include <iostream>
#include <string.h>
using namespace std;

// Hàm tìm ký tự xuất hiện nhiều lần nhất trong chuỗi
// Đầu vào: chuỗi s
// Đầu ra: Ký tự xuất hiện nhiều nhất
char timKyTuXuatHienNhieuNhat(char s[]) {
    // Mảng đếm số lần xuất hiện của tất cả 256 ký tự trong bảng mã ASCII
    // Ban đầu gán tất cả bằng 0
    int dem[256] = {0};
    int len = strlen(s);
    
    // Duyệt qua chuỗi s, đếm tần suất của từng ký tự
    // (unsigned char) ép kiểu để đảm bảo giá trị index của mảng luôn dương
    for (int i = 0; i < len; i++) {
        dem[(unsigned char)s[i]]++; 
    }
    
    int maxCount = 0;     // Biến lưu số lần xuất hiện lớn nhất
    char maxChar = s[0];  // Biến lưu ký tự xuất hiện nhiều nhất
    
    // Duyệt qua bảng đếm (256 phần tử)
    for (int i = 0; i < 256; i++) {
        // Nếu tìm thấy tần suất lớn hơn maxCount
        if (dem[i] > maxCount) {
            maxCount = dem[i];  // Cập nhật maxCount
            maxChar = (char)i;  // Lưu lại ký tự tương ứng (ép kiểu từ index i sang ký tự)
        }
    }
    return maxChar; // Trả về ký tự tìm được
}

int main() {
    char s[100];
    cin.getline(s, 100); // Nhập chuỗi
    // In ra ký tự xuất hiện nhiều nhất
    cout << timKyTuXuatHienNhieuNhat(s) << endl;
    return 0;
}
