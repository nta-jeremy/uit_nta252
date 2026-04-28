/*
 * Chuong trinh may tinh mini thuc hien cac phep toan co ban (+, -, *, /).
 */
#include <iostream>
using namespace std;

int main() {
    float a, b;
    char phepToan;
    
    // Nhap 2 toan hang va toan tu
    cout << "Nhap so thu 1: "; cin >> a;
    cout << "Nhap phep toan (+, -, *, /): "; cin >> phepToan;
    cout << "Nhap so thu 2: "; cin >> b;
    
    // Thuc hien phep tinh tuong ung
    switch (phepToan) {
        case '+': cout << "Ket qua: " << a + b << endl; break;
        case '-': cout << "Ket qua: " << a - b << endl; break;
        case '*': cout << "Ket qua: " << a * b << endl; break;
        case '/': 
            if (b != 0) cout << "Ket qua: " << a / b << endl;
            else cout << "Khong the chia cho 0!" << endl;
            break;
        default: cout << "Phep toan khong hop le!" << endl;
    }
    
    return 0;
}
