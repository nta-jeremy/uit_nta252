/*
 * Chuong trinh tinh so nut cua bien so xe gom 4 chu so.
 */
#include <iostream>
using namespace std;

int main() {
    int bienSo;
    cout << "Nhap bien so xe (gom 4 chu so): ";
    cin >> bienSo;
    
    int tong = 0;
    int temp = bienSo;
    
    // Cong don tung chu so cua bien xe
    tong += temp % 10; temp /= 10;
    tong += temp % 10; temp /= 10;
    tong += temp % 10; temp /= 10;
    tong += temp % 10;
    
    // So nut la hang don vi cua tong cac chu so
    int soNut = tong % 10;
    cout << "Xe cua ban duoc " << soNut << " nut." << endl;
    
    return 0;
}
