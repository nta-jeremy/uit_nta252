#include <iostream>
using namespace std;

// Hàm tính độ dài của một chuỗi ký tự (không dùng hàm strlen có sẵn)
// Đầu vào: mảng ký tự s
// Đầu ra: số nguyên là độ dài của chuỗi
int tinhDoDaiChuoi(char s[]) {
    int count = 0; // Biến đếm số lượng ký tự, ban đầu bằng 0
    // Duyệt qua từng ký tự của chuỗi cho đến khi gặp ký tự kết thúc chuỗi '\0' (null character)
    while (s[count] != '\0') {
        count++; // Tăng biến đếm lên 1 cho mỗi ký tự hợp lệ
    }
    return count; // Trả về tổng số ký tự đếm được (độ dài chuỗi)
}

int main() {
    char s[100]; // Khai báo chuỗi tối đa 100 ký tự
    // Đọc một dòng chuỗi từ bàn phím vào biến s
    cin.getline(s, 100);
    // In ra màn hình độ dài của chuỗi vừa nhập
    cout << tinhDoDaiChuoi(s) << endl;
    return 0;
}
