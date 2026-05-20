/*
 * Chuong trinh tinh tong cac chu so cua mot so nguyen n.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao so nguyen n
    int n;
    cout << "Nhap n: ";
    cin >> n;
    
    int tong = 0;
    int temp = n; // Dung bien tam de khong lam mat gia tri ban dau cua n
    
    // Dung vong lap tach tung chu so tu hang don vi
    while (temp > 0) {
        tong += temp % 10; // Lay chu so cuoi cung
        temp /= 10;        // Bo chu so cuoi cung
    }
    
    cout << "Tong cac chu so cua " << n << " la: " << tong << endl;
    
    return 0;
}
