/*
 * Chuong trinh kiem tra 3 canh co tao thanh mot tam giac hop le hay khong.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao 3 canh cua tam giac
    float a, b, c;
    
    // Nhap gia tri 3 canh
    cout << "Nhap 3 canh a, b, c: ";
    cin >> a >> b >> c;
    
    // Dieu kien tam giac: Tong 2 canh bat ky phai lon hon canh con lai va cac canh phai duong
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) {
        cout << "Day la 3 canh cua mot tam giac hop le" << endl;
    } else {
        cout << "Day khong phai la 3 canh cua mot tam giac" << endl;
    }
    
    return 0;
}
