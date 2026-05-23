#include <iostream>
#include <string.h>
using namespace std;

// Hàm thay thế tất cả các ký tự c1 trong chuỗi bằng ký tự c2
// Đầu vào: chuỗi s, ký tự c1 (cần bị thay thế), ký tự c2 (ký tự mới)
void thayTheKyTu(char s[], char c1, char c2) {
    int len = strlen(s); // Tính độ dài chuỗi
    // Duyệt qua từng ký tự của chuỗi
    for (int i = 0; i < len; i++) {
        // Nếu tìm thấy ký tự giống c1, thay nó bằng c2
        if (s[i] == c1) s[i] = c2;
    }
}

int main() {
    char s[100], c1, c2;
    cin.getline(s, 100); // Nhập chuỗi
    cin >> c1 >> c2;     // Nhập 2 ký tự (ngăn cách bởi khoảng trắng hoặc enter)
    thayTheKyTu(s, c1, c2); // Gọi hàm để xử lý thay thế
    cout << s << endl;   // In chuỗi sau khi đã thay thế
    return 0;
}
