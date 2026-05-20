/*
 * Chuong trinh kiem tra mot ky tu nhap vao la chu cai, chu so hay ky tu dac biet.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao bien luu ky tu
    char c;
    
    // Nhap ky tu tu ban phim
    cout << "Nhap mot ky tu: ";
    cin >> c;
    
    // Kiem tra xem ky tu thuoc nhoam nao dua tren bang ma ASCII
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        cout << "Day la chu cai" << endl;
    } else if (c >= '0' && c <= '9') {
        cout << "Day la chu so" << endl;
    } else {
        cout << "Day la ky tu dac biet" << endl;
    }
    
    return 0;
}
