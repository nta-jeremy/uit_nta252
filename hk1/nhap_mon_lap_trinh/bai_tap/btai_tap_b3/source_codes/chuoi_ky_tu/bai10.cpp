#include <iostream>
#include <string.h>
using namespace std;

// Hàm in ra màn hình tất cả các ký tự in hoa có trong chuỗi
// Đầu vào: chuỗi s
void xuatKyTuInHoa(char s[]) {
    int len = strlen(s); // Lấy độ dài
    cout << "Ky tu in hoa: ";
    // Duyệt từng ký tự
    for (int i = 0; i < len; i++) {
        // Kiểm tra mã ASCII của ký tự xem có nằm trong khoảng chữ hoa ('A' đến 'Z') không
        if (s[i] >= 'A' && s[i] <= 'Z') {
            cout << s[i] << " "; // Nếu là chữ hoa thì in ra, kèm khoảng trắng
        }
    }
    cout << endl; // Xuống dòng
}

int main() {
    char s[100];
    cin.getline(s, 100); // Nhập chuỗi
    xuatKyTuInHoa(s);    // Gọi hàm để in ra các ký tự hoa
    return 0;
}
