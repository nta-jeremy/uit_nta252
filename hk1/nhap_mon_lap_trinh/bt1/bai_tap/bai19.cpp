/*
 * Chuong trinh kiem tra tinh hop le cua ngay/thang, tinh quy, so ngay trong thang,
 * va tim ngay hom truoc, ngay hom sau.
 */
#include <iostream>
using namespace std;

int main() {
    // Khai bao ngay, thang, va mac dinh nam 2024 (nam nhuan)
    int ngay, thang, nam = 2024; 
    cout << "Nhap ngay, thang: ";
    cin >> ngay >> thang;
    
    int soNgayTrongThang = 31;
    bool hopLe = true;
    
    // Kiem tra tinh hop le cua thang
    if (thang < 1 || thang > 12) {
        hopLe = false;
    } else {
        // Xac dinh so ngay trong thang
        switch (thang) {
            case 4: case 6: case 9: case 11:
                soNgayTrongThang = 30;
                break;
            case 2:
                if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
                    soNgayTrongThang = 29;
                } else {
                    soNgayTrongThang = 28;
                }
                break;
        }
        // Kiem tra tinh hop le cua ngay
        if (ngay < 1 || ngay > soNgayTrongThang) {
            hopLe = false;
        }
    }
    
    if (!hopLe) {
        cout << "Ngay thang khong hop le!" << endl;
    } else {
        cout << "Ngay thang hop le." << endl;
        
        // Tinh quy (1 nam co 4 quy, moi quy 3 thang)
        int quy = (thang - 1) / 3 + 1;
        cout << "Thang " << thang << " thuoc quy " << quy << endl;
        
        cout << "Thang " << thang << " co " << soNgayTrongThang << " ngay." << endl;
        
        // Tim ngay hom sau
        int ngaySau = ngay + 1;
        int thangSau = thang;
        if (ngaySau > soNgayTrongThang) {
            ngaySau = 1;
            thangSau++;
            if (thangSau > 12) thangSau = 1;
        }
        cout << "Ngay hom sau la: " << ngaySau << "/" << thangSau << "/" << nam << endl;
        
        // Tim ngay hom truoc
        int ngayTruoc = ngay - 1;
        int thangTruoc = thang;
        if (ngayTruoc < 1) {
            thangTruoc--;
            if (thangTruoc < 1) thangTruoc = 12;
            
            // Tim so ngay cua thang truoc do
            int soNgayThangTruoc = 31;
            switch (thangTruoc) {
                case 4: case 6: case 9: case 11:
                    soNgayThangTruoc = 30; break;
                case 2:
                    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) soNgayThangTruoc = 29;
                    else soNgayThangTruoc = 28;
                    break;
            }
            ngayTruoc = soNgayThangTruoc;
        }
        cout << "Ngay hom truoc la: " << ngayTruoc << "/" << thangTruoc << "/" << nam << endl;
    }
    
    return 0;
}
