#include <iostream>
#include <string.h> // Thư viện hỗ trợ các hàm xử lý chuỗi (strlen)
using namespace std;

// Hàm kiểm tra xem một chuỗi có phải là chuỗi đối xứng (Palindrome) hay không.
// Chuỗi đối xứng là chuỗi đọc từ trái sang phải hay từ phải sang trái đều giống nhau.
// Đầu vào: mảng ký tự s (chuỗi cần kiểm tra)
// Đầu ra: 1 nếu là đối xứng, 0 nếu không đối xứng
int kiemTraDoiXung(char s[]) {
    int len = strlen(s); // Lấy độ dài của chuỗi
    // Duyệt qua một nửa đầu của chuỗi
    for (int i = 0; i < len / 2; i++) {
        // So sánh ký tự ở vị trí i với ký tự đối xứng của nó ở cuối chuỗi (vị trí len - 1 - i)
        // Nếu có bất kỳ cặp ký tự nào không giống nhau, chuỗi không đối xứng
        if (s[i] != s[len - 1 - i]) {
            return 0; // Trả về 0 (sai) ngay lập tức
        }
    }
    return 1; // Nếu tất cả các cặp đều giống nhau, trả về 1 (đúng)
}

int main() {
    char s[100]; // Khai báo một mảng ký tự (chuỗi) tối đa 100 ký tự
    // Đọc một dòng văn bản từ bàn phím (bao gồm cả khoảng trắng) vào chuỗi s
    cin.getline(s, 100);
    // Gọi hàm kiểm tra đối xứng và in kết quả ra màn hình (1 hoặc 0)
    cout << kiemTraDoiXung(s) << endl;
    return 0;
}
