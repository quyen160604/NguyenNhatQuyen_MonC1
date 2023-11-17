#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    const int soThang = 12;
    double luongMua[soThang];
    string tenThang[soThang] = {"Thang 1", "Thang 2", "Thang 3", "Thang 4", "Thang 5", "Thang 6",
                                 "Thang 7", "Thang 8", "Thang 9", "Thang 10", "Thang 11", "Thang 12"};

    double tongLuongMua = 0.0;
    double maxLuongMua = -1.0;  // Gia tri khoi tao de tim gia tri cao nhat
    double minLuongMua = numeric_limits<double>::max();  // Gia tri khoi tao de tim gia tri thap nhat

    // Nhap luong mua cho tung thang va tinh tong
    for (int i = 0; i < soThang; ++i) {
        cout << "Nhap luong mua cho " << tenThang[i] << ": ";
        cin >> luongMua[i];

        // Kiem tra dau vao va yeu cau nguoi dung nhap lai neu la so am
        while (luongMua[i] < 0) {
            cout << "Luong mua khong duoc la so am. Nhap lai luong mua cho " << tenThang[i] << ": ";
            cin >> luongMua[i];
        }

        tongLuongMua += luongMua[i];

        if (luongMua[i] > maxLuongMua) {
            maxLuongMua = luongMua[i];
        }

        if (luongMua[i] < minLuongMua) {
            minLuongMua = luongMua[i];
        }
    }

    // Tinh luong mua trung binh hang thang
    double trungBinhLuongMua = tongLuongMua / soThang;

    // Hien thi ket qua
    cout << "Tong luong mua trong nam la: " << tongLuongMua << " inches" << endl;
    cout << "Luong mua trung binh hang thang la: " << trungBinhLuongMua << " inches" << endl;
    cout << "Thang co luong mua cao nhat: ";
    for (int i = 0; i < soThang; ++i) {
        if (luongMua[i] == maxLuongMua) {
            cout << tenThang[i] << " ";
        }
    }
    cout << "voi " << maxLuongMua << " inches" << endl;

    cout << "Thang co luong mua thap nhat: ";
    for (int i = 0; i < soThang; ++i) {
        if (luongMua[i] == minLuongMua) {
            cout << tenThang[i] << " ";
        }
    }
    cout << "voi " << minLuongMua << " inches" << endl;

    return 0;
}
