#include <iostream>
#include <string.h> // Thư viện để dùng hàm strlen
using namespace std;

// Hàm đảo ngược một chuỗi ký tự
// Đầu vào: mảng ký tự s (chuỗi cần đảo ngược)
void daoNguocChuoi(char s[]) {
    int len = strlen(s); // Lấy độ dài của chuỗi s
    // Duyệt qua một nửa độ dài chuỗi để thực hiện đổi chỗ (swap)
    for (int i = 0; i < len / 2; i++) {
        // Hoán đổi ký tự ở vị trí i với ký tự đối xứng ở vị trí (len - 1 - i)
        char temp = s[i]; // Lưu tạm ký tự s[i] vào biến temp
        s[i] = s[len - 1 - i]; // Gán ký tự ở cuối lên vị trí i
        s[len - 1 - i] = temp; // Gán lại temp (ký tự đầu) xuống vị trí cuối
    }
}

int main() {
    char s[100]; // Khai báo chuỗi s chứa tối đa 100 ký tự
    cin.getline(s, 100); // Nhập chuỗi từ bàn phím
    daoNguocChuoi(s); // Gọi hàm để đảo ngược chuỗi s
    cout << s << endl; // In chuỗi sau khi đã được đảo ngược ra màn hình
    return 0;
}
