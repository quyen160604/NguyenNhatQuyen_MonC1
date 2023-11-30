#include <iostream>
#include <vector>
using namespace std;

// Khai báo các hằng số
const int DON_GIA_XANG = 20000;
const int DON_GIA_HOA_CHAT = 10000;

// Khai báo lớp MayLoc
class MayLoc {
protected:
    // Khai báo các thuộc tính
    int donGiaThue; // Đơn giá thuê máy (đồng/h)
    float congSuat; // Công suất lọc của máy (m3/h)
    float thoiGian; // Thời gian hoạt động của máy (h)
public:
    // Khai báo các phương thức
    virtual void nhap(); // Nhập thông tin sử dụng của máy
    virtual float tinhChiPhi(); // Tính chi phí sử dụng máy
    virtual float tinhLuongNuoc(); // Tính lượng nước lọc được
};

// Định nghĩa phương thức nhap của lớp MayLoc
void MayLoc::nhap() {
    // Nhập đơn giá thuê, công suất và thời gian từ bàn phím
    cout << "Nhap don gia thue cua may (dong/h): ";
    cin >> donGiaThue;
    cout << "Nhap cong suat loc cua may (m3/h): ";
    cin >> congSuat;
    cout << "Nhap thoi gian hoat dong cua may (h): ";
    cin >> thoiGian;
}

// Định nghĩa phương thức tinhChiPhi của lớp MayLoc
float MayLoc::tinhChiPhi() {
    // Tính chi phí thuê máy
    float chiPhiThue = donGiaThue * thoiGian;
    // Trả về kết quả
    return chiPhiThue;
}

// Định nghĩa phương thức tinhLuongNuoc của lớp MayLoc
float MayLoc::tinhLuongNuoc() {
    // Tính lượng nước lọc được
    float luongNuoc = congSuat * thoiGian;
    // Trả về kết quả
    return luongNuoc;
}

// Khai báo lớp MayLyTam kế thừa từ lớp MayLoc
class MayLyTam : public MayLoc {
private:
    // Khai báo thuộc tính riêng
    float luongXang; // Lượng xăng sử dụng (lít)
public:
    // Khai báo các phương thức
    void nhap() override; // Ghi đè phương thức nhap của lớp MayLoc
    float tinhChiPhi() override; // Ghi đè phương thức tinhChiPhi của lớp MayLoc
    float tinhLuongNuoc() override; // Ghi đè phương thức tinhLuongNuoc của lớp MayLoc
};

// Định nghĩa phương thức nhap của lớp MayLyTam
void MayLyTam::nhap() {
    // Gọi phương thức nhap của lớp MayLoc
    MayLoc::nhap();
    // Nhập lượng xăng sử dụng từ bàn phím
    cout << "Nhap luong xang su dung (lit): ";
    cin >> luongXang;
}

// Định nghĩa phương thức tinhChiPhi của lớp MayLyTam
float MayLyTam::tinhChiPhi() {
    // Gọi phương thức tinhChiPhi của lớp MayLoc
    float chiPhiThue = MayLoc::tinhChiPhi();
    // Tính chi phí xăng
    float chiPhiXang = luongXang * DON_GIA_XANG;
    // Tính tổng chi phí sử dụng máy
    float chiPhiSuDung = chiPhiThue + chiPhiXang;
    // Trả về kết quả
    return chiPhiSuDung;
}

// Định nghĩa phương thức tinhLuongNuoc của lớp MayLyTam
float MayLyTam::tinhLuongNuoc() {
    // Tính lượng nước lọc được
    float luongNuoc = congSuat * thoiGian;
    // Trả về kết quả
    return luongNuoc;
}

int main() {
    MayLoc *mayLocPtr; // Con trỏ đến đối tượng lớp MayLoc

    MayLyTam mayLyTam;
    mayLocPtr = &mayLyTam;

    mayLocPtr->nhap(); // Gọi phương thức nhập của lớp MayLyTam

    // Hiển thị thông tin chi phí và lượng nước lọc được
    cout << "Chi phi su dung may: " << mayLocPtr->tinhChiPhi() << " dong" << endl;
    cout << "Luong nuoc loc duoc: " << mayLocPtr->tinhLuongNuoc() << " m3" << endl;

    return 0;
}


