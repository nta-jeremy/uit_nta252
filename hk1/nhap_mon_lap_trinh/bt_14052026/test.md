# Dap an bai tap mang C++ (danh cho nguoi moi hoc)

---

## 1. Nhap mang

```cpp
#include <iostream>
using namespace std;

int main() {
    int n; // bien luu so luong phan tu cua mang
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[100]; // khai bao mang toi da 100 phan tu

    // Vong lap de nhap tung phan tu
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> a[i]; // a[i] la phan tu o vi tri thu i
    }

    return 0;
}
```

**Giai thich:**
- `int a[100]` khai bao mang so nguyen co toi da 100 phan tu.
- `for (int i = 0; i < n; i++)` lap tu 0 den n-1 de nhap tung phan tu.
- `a[i]` la cach truy xuat phan tu thu i trong mang.

---

## 2. Xuat mang

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    // Nhap mang
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Xuat mang
    cout << "Cac phan tu trong mang la: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " "; // in tung phan tu va them khoang trang
    }
    cout << endl;

    return 0;
}
```

**Giai thich:**
- Duyet mang bang vong lap `for` giong nhu luc nhap.
- `cout << a[i] << " "` in moi phan tu ra man hinh.

---

## 3. Tim kiem mot phan tu trong mang

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    cout << "Nhap phan tu can tim: ";
    cin >> x;

    bool timThay = false; // bien kiem tra co tim thay hay khong

    for (int i = 0; i < n; i++) {
        if (a[i] == x) { // neu phan tu thu i bang x
            cout << "Tim thay " << x << " o vi tri thu " << i + 1 << endl;
            timThay = true;
            break; // dung lai ngay khi tim thay (khong can tim nua)
        }
    }

    if (!timThay) {
        cout << "Khong tim thay " << x << " trong mang!" << endl;
    }

    return 0;
}
```

**Giai thich:**
- Duyet tung phan tu, so sanh voi `x`.
- Neu tim thay thi in vi tri va dung lai bang `break`.
- Neu het vong lap ma khong tim thay, bien `timThay` van la `false`.

---

## 4. Dem so luong cac phan tu trong mang

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // So luong phan tu chinh la n (da nhap tu dau)
    // Hoac dem lai de hieu bai toan tong quat hon
    int dem = 0;
    for (int i = 0; i < n; i++) {
        dem++; // moi phan tu dem len 1
    }

    cout << "So luong phan tu trong mang la: " << dem << endl;

    return 0;
}
```

**Giai thich:**
- Trong thuc te, `n` da la so luong phan tu.
- Code tren minh hoa cach dem bang vong lap (co ich khi dem theo dieu kien).

---

## 5. Tinh tong cac phan tu co gia tri chan trong mang

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu: ";
    cin >> n;

    int a[100];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int tongChan = 0; // bien luu tong cac so chan

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) { // kiem tra so chan: chia het cho 2
            tongChan = tongChan + a[i]; // cong vao tong
        }
    }

    cout << "Tong cac phan tu chan trong mang la: " << tongChan << endl;

    return 0;
}
```

**Giai thich:**
- `a[i] % 2 == 0` kiem tra so chan (du chia cho 2 bang 0).
- Neu dung, cong phan tu do vao bien `tongChan`.

---

## 6. Tinh tong gia tri cac phan tu tren duong cheo chinh

> **Luu y:** Duong cheo chinh chi co trong **ma tran vuong** (mang 2 chieu).

```cpp
#include <iostream>
using namespace std;

int main() {
    int n; // n la so hang va so cot cua ma tran vuong
    cout << "Nhap cap cua ma tran vuong (n x n): ";
    cin >> n;

    int a[100][100]; // khai bao ma tran 2 chieu

    // Nhap ma tran
    cout << "Nhap cac phan tu cua ma tran:" << endl;
    for (int i = 0; i < n; i++) {     // duyet tung hang
        for (int j = 0; j < n; j++) { // duyet tung cot trong hang
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Tinh tong duong cheo chinh
    // Duong cheo chinh gom cac phan tu a[0][0], a[1][1], a[2][2], ...
    int tongCheo = 0;
    for (int i = 0; i < n; i++) {
        tongCheo = tongCheo + a[i][i]; // chi lay phan tu co chi so hang = chi so cot
    }

    cout << "Tong cac phan tu tren duong cheo chinh la: " << tongCheo << endl;

    return 0;
}
```

**Giai thich:**
- Ma tran 2 chieu dung `a[i][j]` voi `i` la hang, `j` la cot.
- **Duong cheo chinh** la tap hop cac phan tu co chi so hang bang chi so cot: `a[0][0]`, `a[1][1]`, `a[2][2]`, ...
- Chi can 1 vong lap duyet `i` va lay `a[i][i]`.

---

## Tom tat kien thuc quan trong

| Khai niem | Cu phap | Y nghia |
|-----------|---------|---------|
| Mang 1 chieu | `int a[100];` | Luu nhieu so nguyen lien tiep |
| Mang 2 chieu | `int a[100][100];` | Luu ma tran (bang so) |
| Truy xuat phan tu | `a[i]` | Phan tu thu i |
| Vong lap nhap/xuat | `for (i = 0; i < n; i++)` | Lap n lan |
| Kiem tra so chan | `a[i] % 2 == 0` | Chia het cho 2 |
| Duong cheo chinh | `a[i][i]` | Hang bang cot |
