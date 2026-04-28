/*
 * Chuong trinh chuyen doi so tu 1-7 thanh ten thu trong tuan.
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so tu 1 den 7: ";
    cin >> n;
    
    // Dung switch-case de re nhanh theo gia tri nhap vao
    switch (n) {
        case 1: cout << "Chu Nhat" << endl; break;
        case 2: cout << "Thu Hai" << endl; break;
        case 3: cout << "Thu Ba" << endl; break;
        case 4: cout << "Thu Tu" << endl; break;
        case 5: cout << "Thu Nam" << endl; break;
        case 6: cout << "Thu Sau" << endl; break;
        case 7: cout << "Thu Bay" << endl; break;
        default: cout << "So khong hop le!" << endl;
    }
    
    return 0;
}
