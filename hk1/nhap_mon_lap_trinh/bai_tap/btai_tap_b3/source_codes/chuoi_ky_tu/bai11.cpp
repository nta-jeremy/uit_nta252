#include <iostream>
#include <string.h>
using namespace std;

// Hàm thay đổi kiểu chữ xen kẽ: vị trí chẵn thành in hoa, vị trí lẻ thành in thường
// Đầu vào: chuỗi s
void doiChuXenKe(char s[]) {
    int len = strlen(s);
    // Duyệt qua từng ký tự
    for (int i = 0; i < len; i++) {
        // Nếu vị trí i là số chẵn
        if (i % 2 == 0) {
            // Chuyển thành in hoa: Nếu đang là chữ thường ('a'->'z'), 
            // trừ đi 32 trong mã ASCII để thành chữ hoa
            if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
        } else {
            // Nếu vị trí i là số lẻ
            // Chuyển thành in thường: Nếu đang là chữ hoa ('A'->'Z'),
            // cộng thêm 32 trong mã ASCII để thành chữ thường
            if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
        }
    }
}

int main() {
    char s[100];
    cin.getline(s, 100); // Nhập chuỗi
    doiChuXenKe(s);      // Gọi hàm đổi chữ
    cout << s << endl;   // In chuỗi kết quả
    return 0;
}
