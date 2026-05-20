/*
 * Chuong trinh hien thi Menu lua chon mon an cua nha hang.
 */
#include <iostream>
using namespace std;

int main() {
    int luaChon;
    
    // In giao dien Menu
    cout << "===== MENU NHA HANG =====" << endl;
    cout << "1. Pho bo" << endl;
    cout << "2. Bun cha" << endl;
    cout << "3. Banh mi" << endl;
    cout << "4. Com tam" << endl;
    cout << "Vui long chon mon (1-4): ";
    cin >> luaChon;
    
    // Xu ly lua chon goi mon
    switch (luaChon) {
        case 1: cout << "Ban da chon Pho bo. Gia: 40,000 VND" << endl; break;
        case 2: cout << "Ban da chon Bun cha. Gia: 35,000 VND" << endl; break;
        case 3: cout << "Ban da chon Banh mi. Gia: 20,000 VND" << endl; break;
        case 4: cout << "Ban da chon Com tam. Gia: 45,000 VND" << endl; break;
        default: cout << "Lua chon khong hop le. Vui long chon lai." << endl;
    }
    
    return 0;
}
