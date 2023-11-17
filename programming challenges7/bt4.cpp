#include <iostream>
#include <string>

using namespace std;

int main() {
    const int SO_LOAI_SOT = 5;
    string ten_sot[SO_LOAI_SOT] = {"nhe", "vua", "ngot", "cay", "dam da"};
    int doanh_so_sot[SO_LOAI_SOT] = {0};

    // Nhap du lieu: Yeu cau nguoi dung nhap so luong hu da ban cho tung loai sot
    for (int i = 0; i < SO_LOAI_SOT; i++) {
        do {
            cout << "Nhap so luong hu sot " << ten_sot[i] << " da ban trong thang qua: ";
            cin >> doanh_so_sot[i];

            if (doanh_so_sot[i] < 0) {
                cout << "Vui long nhap mot gia tri khong am cho so luong hu da ban." << endl;
            }
        } while (doanh_so_sot[i] < 0);
    }

    // Tinh tong doanh so va tim san pham ban chay nhat va ban it nhat
    int tong_doanh_so = 0;
    int san_pham_ban_chay_nhat = doanh_so_sot[0];
    int san_pham_ban_it_nhat = doanh_so_sot[0];
    string san_pham_ban_chay_nhat_ten = ten_sot[0];
    string san_pham_ban_it_nhat_ten = ten_sot[0];

    for (int i = 0; i < SO_LOAI_SOT; i++) {
        tong_doanh_so += doanh_so_sot[i];

        if (doanh_so_sot[i] > san_pham_ban_chay_nhat) {
            san_pham_ban_chay_nhat = doanh_so_sot[i];
            san_pham_ban_chay_nhat_ten = ten_sot[i];
        }

        if (doanh_so_sot[i] < san_pham_ban_it_nhat) {
            san_pham_ban_it_nhat = doanh_so_sot[i];
            san_pham_ban_it_nhat_ten = ten_sot[i];
        }
    }

    // Xuat du lieu: Hien thi bao cao doanh so
    cout << "\nBao cao Doanh so:" << endl;
    for (int i = 0; i < SO_LOAI_SOT; i++) {
        cout << "Sot " << ten_sot[i] << ": " << doanh_so_sot[i] << " hu" << endl;
    }

    cout << "Tong doanh so ban hang cho tat ca cac loai sot: " << tong_doanh_so << " hu" << endl;
    cout << "San pham ban chay nhat: Sot " << san_pham_ban_chay_nhat_ten << " (" << san_pham_ban_chay_nhat << " hu)" << endl;
    cout << "San pham ban it nhat: Sot " << san_pham_ban_it_nhat_ten << " (" << san_pham_ban_it_nhat << " hu)" << endl;

    return 0;
}
