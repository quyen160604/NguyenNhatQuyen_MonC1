#include <iostream>
#include <string>

using namespace std;

// Định nghĩa cấu trúc cho dữ liệu phân khu công ty
struct DivisionData {
    string name;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Hàm để nhập số liệu bán hàng cho một phân khu
void inputDivisionSales(DivisionData& division) {
    cout << "Nhap so lieu ban hang cho khu " << division.name << ":" << endl;

    // Nhập và kiểm tra số liệu cho từng quý
    do {
        cout << "Doanh so quy 1: $";
        cin >> division.firstQuarterSales;
    } while (division.firstQuarterSales < 0);

    do {
        cout << "Doanh so quy 2: $";
        cin >> division.secondQuarterSales;
    } while (division.secondQuarterSales < 0);

    do {
        cout << "Doanh so quy 3: $";
        cin >> division.thirdQuarterSales;
    } while (division.thirdQuarterSales < 0);

    do {
        cout << "Doanh so quy 4: $";
        cin >> division.fourthQuarterSales;
    } while (division.fourthQuarterSales < 0);
}

// Hàm để tính tổng và doanh số trung bình cho một phân khu
void calculateDivisionTotals(DivisionData& division) {
    division.totalAnnualSales = division.firstQuarterSales + division.secondQuarterSales +
                               division.thirdQuarterSales + division.fourthQuarterSales;
    division.averageQuarterlySales = division.totalAnnualSales / 4.0;
}

int main() {
    // Tạo biến cấu trúc cho bốn phân khu
    DivisionData eastDivision, westDivision, northDivision, southDivision;

    eastDivision.name = "East";
    westDivision.name = "West";
    northDivision.name = "North";
    southDivision.name = "South";

    // Nhập dữ liệu số liệu bán hàng cho mỗi phân khu
    inputDivisionSales(eastDivision);
    inputDivisionSales(westDivision);
    inputDivisionSales(northDivision);
    inputDivisionSales(southDivision);

    // Tính tổng và doanh số trung bình cho từng phân khu
    calculateDivisionTotals(eastDivision);
    calculateDivisionTotals(westDivision);
    calculateDivisionTotals(northDivision);
    calculateDivisionTotals(southDivision);

    // Hiển thị kết quả cho từng phân khu
    cout << "\nDu lieu ban hang cho cac phan khu cong ty:" << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Phan khu: " << eastDivision.name << endl;
    cout << "Tong doanh so hang nam: $" << eastDivision.totalAnnualSales << endl;
    cout << "Doanh so trung binh theo quy: $" << eastDivision.averageQuarterlySales << endl;
    cout << endl;

    cout << "Phan khu: " << westDivision.name << endl;
    cout << "Tong doanh so hang nam: $" << westDivision.totalAnnualSales << endl;
    cout << "Doanh so trung binh theo quy: $" << westDivision.averageQuarterlySales << endl;
    cout << endl;

    cout << "Phan khu: " << northDivision.name << endl;
    cout << "Tong doanh so hang nam: $" << northDivision.totalAnnualSales << endl;
    cout << "Doanh so trung binh theo quy: $" << northDivision.averageQuarterlySales << endl;
    cout << endl;

    cout << "Phan khu: " << southDivision.name << endl;
    cout << "Tong doanh so theo nam: $" << southDivision.totalAnnualSales << endl;
    cout << "Doanh so theo quy: $" << southDivision.averageQuarterlySales << endl;

    return 0;
}
