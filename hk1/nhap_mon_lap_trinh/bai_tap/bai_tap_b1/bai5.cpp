/*
 * Chuong trinh giai phuong trinh bac nhat: ax + b = 0.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao cac he so a va b
    float a, b;
    
    // Nhap he so tu ban phim
    cout << "Nhap a va b: ";
    cin >> a >> b;
    
    // Bien luan nghiem cua phuong trinh
    if (a == 0) {
        if (b == 0) {
            cout << "Phuong trinh co vo so nghiem" << endl;
        } else {
            cout << "Phuong trinh vo nghiem" << endl;
        }
    } else {
        // Neu a khac 0, phuong trinh co nghiem duy nhat x = -b/a
        cout << "Phuong trinh co nghiem x = " << -b / a << endl;
    }
    
    return 0;
}
