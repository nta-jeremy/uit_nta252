/*
 * Chuong trinh tinh tuoi cua nguoi dung dua tren nam sinh.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao nam sinh va nam hien tai
    int namSinh;
    int namHienTai = 2024; // Gia dinh nam hien tai la 2024
    
    // Nhap nam sinh
    cout << "Nhap nam sinh: ";
    cin >> namSinh;
    
    // Kiem tra tinh hop le cua nam sinh
    if (namSinh > namHienTai) {
        cout << "Nam sinh khong hop le!" << endl;
    } else {
        cout << "Tuoi cua ban la: " << namHienTai - namSinh << endl;
    }
    
    return 0;
}
