#include <iostream>
using namespace std;

// Hàm in ra cách đọc của số có 2 chữ số
void docSoHaiChuSo(int n) {
    if (n < 10 || n > 99) {
        cout << "Vui long nhap so co 2 chu so!" << endl;
        return;
    }

    int hangChuc = n / 10;   // Lấy chữ số hàng chục
    int hangDonVi = n % 10;  // Lấy chữ số hàng đơn vị

    // Đọc hàng chục
    switch (hangChuc) {
        case 1: cout << "Muoi "; break;
        case 2: cout << "Hai muoi "; break;
        case 3: cout << "Ba muoi "; break;
        case 4: cout << "Bon muoi "; break;
        case 5: cout << "Nam muoi "; break;
        case 6: cout << "Sau muoi "; break;
        case 7: cout << "Bay muoi "; break;
        case 8: cout << "Tam muoi "; break;
        case 9: cout << "Chin muoi "; break;
    }

    // Đọc hàng đơn vị
    switch (hangDonVi) {
        case 1: 
            if (hangChuc == 1) cout << "mot"; // Ví dụ: 11 (mười một)
            else cout << "mot";              // Ví dụ: 21 (hai mươi mốt) - Có thể in là 'mot' hoặc 'mốt'
            break;
        case 2: cout << "hai"; break;
        case 3: cout << "ba"; break;
        case 4: 
            if (hangChuc == 1) cout << "bon"; 
            else cout << "tu"; // Ví dụ 24 là hai mươi tư
            break;
        case 5: 
            if (hangChuc == 1) cout << "lam"; // 15 là mười lăm
            else cout << "lam";               // 25 là hai mươi lăm
            break;
        case 6: cout << "sau"; break;
        case 7: cout << "bay"; break;
        case 8: cout << "tam"; break;
        case 9: cout << "chin"; break;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap vao so co 2 chu so: ";
    cin >> n;
    
    cout << "Cach doc so " << n << " la: ";
    docSoHaiChuSo(n);

    return 0;
}
