/*
 * Chuong trinh tinh tien luong cong nhan dua tren tham nien cong tac.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao tham nien, he so va luong co ban
    int tnct;
    float heSo;
    long luongCoBan = 2340000; // Luong co ban mac dinh
    
    // Nhap tham nien (so thang)
    cout << "Nhap tham nien cong tac (so thang): ";
    cin >> tnct;
    
    // Xac dinh he so luong dua tren tham nien
    if (tnct < 12) {
        heSo = 1.92;
    } else if (tnct < 36) {
        heSo = 2.34;
    } else if (tnct < 60) {
        heSo = 3.0;
    } else {
        heSo = 4.5;
    }
    
    // Tinh va in ket qua
    long luong = heSo * luongCoBan;
    cout << "He so luong: " << heSo << endl;
    cout << "Tien luong: " << luong << " VND" << endl;
    
    return 0;
}
