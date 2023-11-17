#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Định nghĩa kiểu dữ liệu liệt kê cho các tháng
enum Months { THANG_1, THANG_2, THANG_3, THANG_4, THANG_5, THANG_6, THANG_7, THANG_8, THANG_9, THANG_10, THANG_11, THANG_12 };

// Định nghĩa cấu trúc cho dữ liệu thời tiết
struct DuLieuThoiTiet {
    double LuongMuaTong;
    double NhietDoCaoNhat;
    double NhietDoThapNhat;
    double NhietDoTrungBinh;
};

int main() {
    const int soThang = 12;
    DuLieuThoiTiet DuLieuThoiTietNam[soThang];

    // Nhập dữ liệu thời tiết cho từng tháng bằng cách sử dụng kiểu liệt kê
    for (int thang = THANG_1; thang <= THANG_12; ++thang) {
        cout << "Nhap du lieu thoi tiet cho " << static_cast<Months>(thang) << endl;

        // Nhập và kiểm tra luong mua tong cong
        cout << "Luong Mua Tong Cong (tinh bang inch): ";
        cin >> DuLieuThoiTietNam[thang].LuongMuaTong;

        // Nhập và kiểm tra nhiet do cao nhat
        do {
            cout << "Nhiet Do Cao Nhat (do Fahrenheit): ";
            cin >> DuLieuThoiTietNam[thang].NhietDoCaoNhat;
        } while (DuLieuThoiTietNam[thang].NhietDoCaoNhat < -100 || DuLieuThoiTietNam[thang].NhietDoCaoNhat > 140);

        // Nhập và kiểm tra nhiet do thap nhat
        do {
            cout << "Nhiet Do Thap Nhat (do Fahrenheit): ";
            cin >> DuLieuThoiTietNam[thang].NhietDoThapNhat;
        } while (DuLieuThoiTietNam[thang].NhietDoThapNhat < -100 || DuLieuThoiTietNam[thang].NhietDoThapNhat > 140);

        // Tính toán và lưu trữ nhiet do trung binh
        DuLieuThoiTietNam[thang].NhietDoTrungBinh = (DuLieuThoiTietNam[thang].NhietDoCaoNhat + DuLieuThoiTietNam[thang].NhietDoThapNhat) / 2.0;

        cout << endl;
    }

    // Tính toán và hiển thị thống kê cho cả năm
    double LuongMuaTongNam = 0.0;
    double TongNhietDoTrungBinh = 0.0;
    double NhietDoCaoNhat = -100.0;
    double NhietDoThapNhat = 140.0;
    Months ThangNhietDoCaoNhat = THANG_1;
    Months ThangNhietDoThapNhat = THANG_1;

    for (int thang = THANG_1; thang <= THANG_12; ++thang) {
        LuongMuaTongNam += DuLieuThoiTietNam[thang].LuongMuaTong;
        TongNhietDoTrungBinh += DuLieuThoiTietNam[thang].NhietDoTrungBinh;

        if (DuLieuThoiTietNam[thang].NhietDoCaoNhat > NhietDoCaoNhat) {
            NhietDoCaoNhat = DuLieuThoiTietNam[thang].NhietDoCaoNhat;
            ThangNhietDoCaoNhat = static_cast<Months>(thang);
        }

        if (DuLieuThoiTietNam[thang].NhietDoThapNhat < NhietDoThapNhat) {
            NhietDoThapNhat = DuLieuThoiTietNam[thang].NhietDoThapNhat;
            ThangNhietDoThapNhat = static_cast<Months>(thang);
        }
    }

    double TrungBinhNhietDoHangNam = TongNhietDoTrungBinh / soThang;

    cout << "Thong Ke Thoi Tiet Hang Nam:" << endl;
    cout << "---------------------------" << endl;
    cout << "Luong Mua Trung Binh Hang Thang: " << LuongMuaTongNam / soThang << " inch" << endl;
    cout << "Luong Mua Tong Cong Trong Nam: " << LuongMuaTongNam << " inch" << endl;
    cout << "Nhiet Do Cao Nhat Trong Nam: " << NhietDoCaoNhat << " do Fahrenheit (" << static_cast<Months>(ThangNhietDoCaoNhat) << ")" << endl;
    cout << "Nhiet Do Thap Nhat Trong Nam: " << NhietDoThapNhat << " do Fahrenheit (" << static_cast<Months>(ThangNhietDoThapNhat) << ")" << endl;
    cout << "Nhiet Do Trung Binh Cua Tat Ca Cac Thang: " << TrungBinhNhietDoHangNam << " do Fahrenheit" << endl;

    return 0;
}
