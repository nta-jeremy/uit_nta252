#include <iostream>
#include <math.h>
using namespace std;

// Hàm tính delta = b^2 - 4ac
float tinhDelta(float a, float b, float c) {
    return b * b - 4 * a * c;
}

int main() {
    float a, b, c;
    cout << "Nhap he so A, B, C: ";
    cin >> a >> b >> c;

    if (a == 0) {
        // Nếu A = 0 thì phương trình trở thành phương trình bậc 1: Bx + C = 0
        if (b == 0) {
            if (c == 0) cout << "Phuong trinh co vo so nghiem" << endl;
            else cout << "Phuong trinh vo nghiem" << endl;
        } else {
            cout << "Phuong trinh co 1 nghiem duy nhat x = " << -c / b << endl;
        }
    } else {
        // Nếu A != 0, tính delta
        float delta = tinhDelta(a, b, c);

        if (delta < 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } else if (delta == 0) {
            cout << "Phuong trinh co nghiem kep x1 = x2 = " << -b / (2 * a) << endl;
        } else {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co 2 nghiem phan biet:" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }

    return 0;
}
