#include <iostream>
#include <string.h> // Thư viện để dùng hàm strlen
using namespace std;

// Hàm tìm vị trí xuất hiện đầu tiên của một ký tự trong chuỗi
// Đầu vào: chuỗi s và ký tự c cần tìm
// Đầu ra: vị trí (index) đầu tiên của c trong s, hoặc -1 nếu không tìm thấy
int timViTriKyTu(char s[], char c) {
    int len = strlen(s); // Lấy độ dài chuỗi
    // Duyệt qua từng ký tự trong chuỗi từ đầu đến cuối
    for (int i = 0; i < len; i++) {
        // Nếu ký tự tại vị trí i giống với ký tự c cần tìm
        if (s[i] == c) {
            return i; // Trả về ngay vị trí i (vị trí đầu tiên tìm thấy)
        }
    }
    return -1; // Nếu duyệt hết chuỗi mà không thấy c, trả về -1
}

int main() {
    char s[100]; // Khai báo chuỗi
    char c;      // Khai báo biến ký tự cần tìm
    
    // Nhập chuỗi
    cin.getline(s, 100);
    // Nhập ký tự cần tìm (cin >> c sẽ bỏ qua các khoảng trắng thừa trước đó)
    cin >> c;
    
    // In ra vị trí của ký tự c trong chuỗi s
    cout << timViTriKyTu(s, c) << endl;
    return 0;
}
