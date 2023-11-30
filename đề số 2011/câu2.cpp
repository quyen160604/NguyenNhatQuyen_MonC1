#include <iostream>
using namespace std;

// Khai báo hằng số đơn giá hóa chất
const int DON_GIA_HOA_CHAT = 10000;

// Khai báo lớp MayXucTac
class MayXucTac {
private:
    // Khai báo các thuộc tính riêng
    float congSuat; // Công suất lọc của máy (m3/h)
    float hoaChat; // Lượng hóa chất sử dụng (g)
    float thoiGian; // Thời gian hoạt động của máy (h)

public:
    // Khai báo các phương thức công khai
    void nhap(); // Nhập thông tin sử dụng của máy
    float tinhChiPhi(); // Tính chi phí sử dụng máy
    float tinhLuongNuoc(); // Tính lượng nước lọc được
};

// Định nghĩa phương thức nhap
void MayXucTac::nhap() {
    // Nhập công suất, lượng hóa chất và thời gian từ bàn phím
    cout << "Nhap cong suat loc cua may (m3/h): ";
    cin >> congSuat;
    cout << "Nhap luong hoa chat su dung (g): ";
    cin >> hoaChat;
    cout << "Nhap thoi gian hoat dong cua may (h): ";
    cin >> thoiGian;
}

// Định nghĩa phương thức tinhChiPhi
float MayXucTac::tinhChiPhi() {
    // Tính chi phí thuê máy
    float chiPhiThue = 80000 * thoiGian; // Đơn giá thuê là 80.000 đồng/h
    // Tính chi phí nhiên/vật liệu
    float chiPhiHoaChat = DON_GIA_HOA_CHAT * hoaChat; // Đơn giá hóa chất là 10.000 đồng/g
    // Tính tổng chi phí sử dụng máy
    float chiPhiSuDung = chiPhiThue + chiPhiHoaChat;
    // Trả về kết quả
    return chiPhiSuDung;
}

// Định nghĩa phương thức tinhLuongNuoc
float MayXucTac::tinhLuongNuoc() {
    // Tính công suất lọc thực tế theo hai trường hợp
    float congSuatThucTe;
    if (thoiGian < 10) {
        // Nếu thời gian sử dụng < 10h
        congSuatThucTe = congSuat * (hoaChat / 100);
    }
    else {
        // Nếu thời gian sử dụng >= 10h
        congSuatThucTe = congSuat * (hoaChat / 100) / (thoiGian / 10);
    }
    // Tính lượng nước lọc được
    float luongNuoc = congSuatThucTe * thoiGian;
    // Trả về kết quả
    return luongNuoc;
}

// Hàm main
int main() {
    // In ra đơn giá hóa chất
    cout << "Don gia hoa chat: " << DON_GIA_HOA_CHAT << endl;
    // Tạo một đối tượng của lớp MayXucTac
    MayXucTac m;
    // Gọi phương thức nhap để nhập thông tin sử dụng của máy
    m.nhap();
    // In ra chi phí sử dụng máy
    cout << "Chi phi su dung may: " << m.tinhChiPhi() << endl;
    // In ra lượng nước lọc được
    cout << "Luong nuoc loc duoc: " << m.tinhLuongNuoc() << endl;
    return 0;
}

