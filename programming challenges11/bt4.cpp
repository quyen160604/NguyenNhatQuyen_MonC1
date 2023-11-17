#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Định nghĩa cấu trúc cho dữ liệu thời tiết
struct ThoiTietData {
    double luongMuaTongCuaNam;
    double nhietDoCaoNhat;
    double nhietDoThapNhat;
    double nhietDoTrungBinh;
};

int main() {
    const int soThangTrongNam = 12;
    ThoiTietData thoiTietCuaNam[soThangTrongNam];

    // Nhập dữ liệu thời tiết cho từng tháng
    for (int thang = 0; thang < soThangTrongNam; ++thang) {
        cout << "Nhap du lieu thoi tiet cho thang: " << thang + 1 << endl;

        // Nhập và kiểm tra lượng mưa tổng cộng
        cout << "Luong mau tong cong tinh bang (inch): ";
        cin >> thoiTietCuaNam[thang].luongMuaTongCuaNam;

        // Nhập và kiểm tra nhiệt độ cao nhất
        do {
            cout << "Nhiet do cao nhat do (Fahrenheit): ";
            cin >> thoiTietCuaNam[thang].nhietDoCaoNhat;
        } while (thoiTietCuaNam[thang].nhietDoCaoNhat < -100 || thoiTietCuaNam[thang].nhietDoCaoNhat > 140);

        // Nhập và kiểm tra nhiệt độ thấp nhất
        do {
            cout << "Nhiet do thap nhat (do Fahrenheit): ";
            cin >> thoiTietCuaNam[thang].nhietDoThapNhat;
        } while (thoiTietCuaNam[thang].nhietDoThapNhat < -100 || thoiTietCuaNam[thang].nhietDoThapNhat > 140);

        // Tính toán và lưu trữ nhiệt độ trung bình
        thoiTietCuaNam[thang].nhietDoTrungBinh = (thoiTietCuaNam[thang].nhietDoCaoNhat + thoiTietCuaNam[thang].nhietDoThapNhat) / 2.0;

        cout << endl;
    }

    // Tính toán và hiển thị thống kê cho cả năm
    double luongMuaTongNam = 0.0;
    double totalAverageTemperature = 0.0;
    double highestTemperature = -100.0;
    double lowestTemperature = 140.0;
    int highestMonth = -1;
    int lowestMonth = -1;

    for (int thang = 0; thang < soThangTrongNam; ++thang) {
        luongMuaTongNam += thoiTietCuaNam[thang].luongMuaTongCuaNam;
        totalAverageTemperature += thoiTietCuaNam[thang].nhietDoTrungBinh;

        if (thoiTietCuaNam[thang].nhietDoCaoNhat > highestTemperature) {
            highestTemperature = thoiTietCuaNam[thang].nhietDoCaoNhat;
            highestMonth = thang;
        }

        if (thoiTietCuaNam[thang].nhietDoThapNhat < lowestTemperature) {
            lowestTemperature = thoiTietCuaNam[thang].nhietDoThapNhat;
            lowestMonth = thang;
        }
    }

    double averageAnnualTemperature = totalAverageTemperature / soThangTrongNam;

    cout << "Thong ke thoi tiet hang nam:" << endl;
    cout << "---------------------------" << endl;
    cout << "luong mau hang thang trung binh: " << luongMuaTongNam / soThangTrongNam << " inch" << endl;
    cout << "Luong mua tong cong trong nam: " << luongMuaTongNam << " inch" << endl;
    cout << "Nhiet do cao nhat trong nbam: " << highestTemperature << " độ Fahrenheit (Tháng " << highestMonth + 1 << ")" << endl;
    cout << "nhiet do thap naht trong nam: " << lowestTemperature << " độ Fahrenheit (Tháng " << lowestMonth + 1 << ")" << endl;
    cout << "Nhit do trung bịnh cua tat ca cac thang: " << averageAnnualTemperature << " độ Fahrenheit" << endl;

    return 0;
}
