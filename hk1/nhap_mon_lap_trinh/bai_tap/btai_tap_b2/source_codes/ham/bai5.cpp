#include <iostream>
#include <math.h>
using namespace std;

// Hàm tính khoảng cách giữa 2 điểm A(xA, yA) và B(xB, yB)
float tinhKhoangCach(float xA, float yA, float xB, float yB) {
    // Công thức: d = can_bac_hai((xA - xB)^2 + (yA - yB)^2)
    return sqrt(pow(xA - xB, 2) + pow(yA - yB, 2));
}

int main() {
    float xA, yA, xB, yB, xC, yC;
    cout << "Nhap toa do diem A (x, y): "; cin >> xA >> yA;
    cout << "Nhap toa do diem B (x, y): "; cin >> xB >> yB;
    cout << "Nhap toa do diem C (x, y): "; cin >> xC >> yC;

    // Tính độ dài 3 cạnh của tam giác
    float a = tinhKhoangCach(xB, yB, xC, yC); // cạnh BC
    float b = tinhKhoangCach(xA, yA, xC, yC); // cạnh AC
    float c = tinhKhoangCach(xA, yA, xB, yB); // cạnh AB

    // Kiểm tra xem 3 điểm có tạo thành tam giác không (Tổng 2 cạnh phải lớn hơn cạnh còn lại)
    if (a + b > c && a + c > b && b + c > a) {
        // Dùng sai số nhỏ do kiểu float có thể làm tính toán không chính xác tuyệt đối
        float epsilon = 0.0001; 

        bool vuong = abs(a*a + b*b - c*c) < epsilon || abs(a*a + c*c - b*b) < epsilon || abs(b*b + c*c - a*a) < epsilon;
        bool can = abs(a - b) < epsilon || abs(a - c) < epsilon || abs(b - c) < epsilon;
        bool deu = abs(a - b) < epsilon && abs(a - c) < epsilon;

        if (deu) {
            cout << "Day la tam giac deu." << endl;
        } else if (vuong && can) {
            cout << "Day la tam giac vuong can." << endl;
        } else if (vuong) {
            cout << "Day la tam giac vuong." << endl;
        } else if (can) {
            cout << "Day la tam giac can." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "3 diem nay khong tao thanh tam giac." << endl;
    }

    return 0;
}
