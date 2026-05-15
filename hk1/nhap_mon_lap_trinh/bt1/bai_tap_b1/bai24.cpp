/*
 * Chuong trinh xac dinh so ngay trong mot thang bang cau truc switch-case.
 */
#include <iostream>
using namespace std;

int main() {
    int thang;
    cout << "Nhap vao mot thang (1-12): ";
    cin >> thang;
    
    switch (thang) {
        // Cac thang co 31 ngay
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            cout << "Thang nay co 31 ngay." << endl;
            break;
        // Cac thang co 30 ngay
        case 4: case 6: case 9: case 11:
            cout << "Thang nay co 30 ngay." << endl;
            break;
        // Thang 2 dac biet
        case 2:
            cout << "Thang nay co 28 hoac 29 ngay (neu la nam nhuan)." << endl;
            break;
        default:
            cout << "Thang khong hop le!" << endl;
    }
    
    return 0;
}
