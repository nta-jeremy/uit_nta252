/*
 * Chuong trinh kiem tra so chan hay so le bang switch-case.
 */
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    
    // Lay so du khi chia cho 2
    switch (n % 2) {
        case 0: 
            cout << n << " la so chan." << endl; 
            break;
        case 1:
        case -1: // Xu ly them truong hop so nguyen am le
            cout << n << " la so le." << endl; 
            break;
    }
    
    return 0;
}
