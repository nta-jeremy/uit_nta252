#include <iostream>
using namespace std;

// Hàm kiểm tra tính chất tam giác
void kiemTraTamGiac(float a, float b, float c) {
    // Điều kiện để tạo thành tam giác: Tổng 2 cạnh luôn lớn hơn cạnh còn lại
    if (a + b > c && a + c > b && b + c > a) {
        // Kiểm tra tam giác đều: 3 cạnh bằng nhau
        if (a == b && b == c) {
            cout << "Day la tam giac deu." << endl;
        } 
        // Kiểm tra tam giác vuông cân: vừa vuông vừa cân
        else if ((a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) && 
                 (a == b || a == c || b == c)) {
            cout << "Day la tam giac vuong can." << endl;
        } 
        // Kiểm tra tam giác vuông: Định lý Pytago
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            cout << "Day la tam giac vuong." << endl;
        } 
        // Kiểm tra tam giác cân: có 2 cạnh bằng nhau
        else if (a == b || a == c || b == c) {
            cout << "Day la tam giac can." << endl;
        } 
        // Còn lại là tam giác thường
        else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "3 so nhap vao khong tao thanh tam giac." << endl;
    }
}

int main() {
    float a, b, c;
    cout << "Nhap 3 so a, b, c (chieu dai 3 canh): ";
    cin >> a >> b >> c;
    
    kiemTraTamGiac(a, b, c);
    
    return 0;
}
