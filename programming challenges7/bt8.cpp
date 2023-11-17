#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string tenTep;
    cout << "Nhap ten cua tep chua cac so: ";
    cin >> tenTep;

    ifstream tepNhap(tenTep);
    
    if (!tepNhap) {
        cout << "Loi mo tep. Vui long kiem tra ten tep va thu lai." << endl;
        return 1;
    }

    vector<double> so;
    double soHienTai;
    double tong = 0.0;
    
    while (tepNhap >> soHienTai) {
        so.push_back(soHienTai);
        tong += soHienTai;
    }

    tepNhap.close();

    if (so.empty()) {
        cout << "Tep trong." << endl;
        return 1;
    }

    double nhoNhat = so[0];
    double lonNhat = so[0];

    for (size_t i = 1; i < so.size(); i++) {
        if (so[i] < nhoNhat) {
            nhoNhat = so[i];
        }
        if (so[i] > lonNhat) {
            lonNhat = so[i];
        }
    }

    double trungBinh = tong / so.size();

    cout << "So nho nhat trong mang: " << nhoNhat << endl;
    cout << "So lon nhat trong mang: " << lonNhat << endl;
    cout << "Tong cua cac so trong mang: " << tong << endl;
    cout << "Trung binh cua cac so trong mang: " << trungBinh << endl;

    return 0;
}
