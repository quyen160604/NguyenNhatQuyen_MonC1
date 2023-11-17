#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Định nghĩa cấu trúc cho dữ liệu của cầu thủ bóng đá
struct CauThuBongDa {
    string tenCauThu;
    int soAoCauThu;
    int diemGhiDuoc;
};

int main() {
    const int soCauThu = 12;
    CauThuBongDa danhSachCauThu[soCauThu];

    // Nhập dữ liệu của cầu thủ bóng đá cho từng cầu thủ
    for (int i = 0; i < soCauThu; ++i) {
        cout << "Nhap du lieu cho cau thu : " << i + 1 << endl;

        // Nhập và kiểm tra số áo của cầu thủ
        do {
            cout << "So ao cau thu: ";
            cin >> danhSachCauThu[i].soAoCauThu;
            if (danhSachCauThu[i].soAoCauThu < 0) {
                cout << "Vui long nhap mot so khong am cho so ao cau thu." << endl;
            }
        } while (danhSachCauThu[i].soAoCauThu < 0);

        cin.ignore(); // Xóa ký tự newline từ bộ đệm nhập

        // Nhập tên của cầu thủ
        cout << "ten cau thu : ";
        getline(cin, danhSachCauThu[i].tenCauThu);

        // Nhập và kiểm tra điểm ghi được bởi cầu thủ
        do {
            cout << "Diem ghi duoc boi cau thu: ";
            cin >> danhSachCauThu[i].diemGhiDuoc;
            if (danhSachCauThu[i].diemGhiDuoc < 0) {
                cout << "Vui long nhap mot gia tri khong am cho diem ghi duoc." << endl;
            }
        } while (danhSachCauThu[i].diemGhiDuoc < 0);

        cout << endl;
    }

    // Tính và hiển thị tổng điểm ghi được bởi đội bóng
    int tongDiem = 0;
    int diemCaoNhat = danhSachCauThu[0].diemGhiDuoc;
    string cauThuXuatSac = danhSachCauThu[0].tenCauThu;

    cout << "Bang du lieu cua cau thu:" << endl;
    cout << left << setw(10) << "so ao " << setw(20) << "ten" << setw(15) << "Diem ghi duoc" << endl;

    for (int i = 0; i < soCauThu; ++i) {
        cout << left << setw(10) << danhSachCauThu[i].soAoCauThu << setw(20) << danhSachCauThu[i].tenCauThu << setw(15) << danhSachCauThu[i].diemGhiDuoc << endl;

        tongDiem += danhSachCauThu[i].diemGhiDuoc;

        if (danhSachCauThu[i].diemGhiDuoc > diemCaoNhat) {
            diemCaoNhat = danhSachCauThu[i].diemGhiDuoc;
            cauThuXuatSac = danhSachCauThu[i].tenCauThu;
        }
    }

    cout << "tong diem ghi duoc boi doi bong: " << tongDiem << endl;
    cout << "cau thu ghi diem nhieu nhat: " << cauThuXuatSac << " (" << diemCaoNhat << " điểm)" << endl;

    return 0;
}


