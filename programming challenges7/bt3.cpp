#include <iostream>
#include <string>

using namespace std;

int main() {
    // Khai báo mảng
    string ten_sot[] = {"nhe", "vua", "ngot", "cay", "dam da"};
    int doanh_so_sot[] = {0, 0, 0, 0, 0};

    // Yeu cau nguoi dung nhap so luong hu sot da ban cho moi loai
    for (int i = 0; i < 5; i++) {
        int so_luong_ban;
        cout << "Nhap so luong hu sot " << ten_sot[i] << " da ban trong thang qua: ";
        cin >> so_luong_ban;

        if (cin.fail()) {
            cout << "Nhap khong hop le. Vui long nhap so luong hu sot hop le." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
            i--;
        } else {
            doanh_so_sot[i] = so_luong_ban;
        }
    }

    // Hien thi bao cao doanh so ban hang cho tung loai sot
    cout << "\nBao cao Doanh so:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Sot " << ten_sot[i] << ": " << doanh_so_sot[i] << " hu" << endl;
    }

    // Tinh tong doanh so ban hang
    int tong_doanh_so = 0;
    for (int i = 0; i < 5; i++) {
        tong_doanh_so += doanh_so_sot[i];
    }
    cout << "Tong doanh so ban hang cho tat ca cac loai sot: " << tong_doanh_so << " hu" << endl;

    return 0;
}
