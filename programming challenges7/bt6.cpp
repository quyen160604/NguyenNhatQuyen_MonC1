#include <iostream>

using namespace std;

int main() {
    const int SO_KHI = 3;
    const int SO_NGAY_TRONG_TUAN = 5;
    double thuc_an[SO_KHI][SO_NGAY_TRONG_TUAN] = {0.0};

    // Nhập dữ liệu: Yêu cầu người dùng nhập số lượng thức ăn cho từng con khỉ
    for (int i = 0; i < SO_KHI; i++) {
        for (int j = 0; j < SO_NGAY_TRONG_TUAN; j++) {
            do {
                cout << "nhap so luong thuc an cho khi(pound) " << i + 1 << " ngay " << j + 1 << ": ";
                cin >> thuc_an[i][j];

                if (thuc_an[i][j] < 0) {
                    cout << "vui long khong nhap so am cho luong thuc ." << endl;
                }
            } while (thuc_an[i][j] < 0);
        }
    }

    // Tính lượng thức ăn trung bình mỗi ngày của cả gia đình khỉ
    double tong_thuc_an = 0.0;
    for (int i = 0; i < SO_KHI; i++) {
        for (int j = 0; j < SO_NGAY_TRONG_TUAN; j++) {
            tong_thuc_an += thuc_an[i][j];
        }
    }
    double trung_binh_ngay = tong_thuc_an / (SO_KHI * SO_NGAY_TRONG_TUAN);

    // Tìm lượng thức ăn ít nhất và nhiều nhất trong tuần
    double it_nhat = thuc_an[0][0];
    double nhieu_nhat = thuc_an[0][0];

    for (int i = 0; i < SO_KHI; i++) {
        for (int j = 0; j < SO_NGAY_TRONG_TUAN; j++) {
            if (thuc_an[i][j] < it_nhat) {
                it_nhat = thuc_an[i][j];
            }
            if (thuc_an[i][j] > nhieu_nhat) {
                nhieu_nhat = thuc_an[i][j];
            }
        }
    }

    // Xuất báo cáo
    cout << "\nbao cao lenh luong thuc thuc an :" << endl;
    cout << "luong thuc an binh trung cua gia dinh khi: " << trung_binh_ngay << " pounds" << endl;
    cout << "luonh thuc an it nhat trong mot tuan " << it_nhat << " pounds" << endl;
    cout << "luong thuc an nhieu nhat trong tuan: " << nhieu_nhat << " pounds" << endl;

    return 0;
}
