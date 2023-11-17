#include <iostream>

using namespace std;

// Hàm hiển thị các số lớn hơn n trong một mảng
void hienThiSoLonHonN(int mang[], int kichThuoc, int n) {
    cout << "Cac so lon hon " << n << " trong mang la: ";
    for (int i = 0; i < kichThuoc; i++) {
        if (mang[i] > n) {
            cout << mang[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int KICH_THUOC_TOI_DA = 100; // Kích thước tối đa của mảng
    int mang[KICH_THUOC_TOI_DA];
    int kichThuoc, n;

    // Nhập: Lấy kích thước của mảng
    cout << "Nhap kich thuoc cua mang: ";
    cin >> kichThuoc;

    // Nhập: Lấy các phần tử của mảng
    cout << "Nhap " << kichThuoc << " so nguyen cho mang:" << endl;
    for (int i = 0; i < kichThuoc; i++) {
        cin >> mang[i];
    }

    // Nhập: Lấy giá trị của n
    cout << "Nhap mot so n: ";
    cin >> n;

    // Gọi hàm để hiển thị các số lớn hơn n
    hienThiSoLonHonN(mang, kichThuoc, n);

    return 0;
}
