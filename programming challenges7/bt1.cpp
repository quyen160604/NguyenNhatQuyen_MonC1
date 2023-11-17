#include <iostream>

using namespace std;

int main() {
    const int size = 10;
    double values[size];

    // Nhập 10 giá trị từ người dùng và lưu vào mảng
    for (int i = 0; i < size; ++i) {
        cout << "Nhap gia tri thu nhat " << i + 1 << ": ";
        cin >> values[i];
    }

    // Tìm giá trị lớn nhất và nhỏ nhất
    double max_value = values[0];
    double min_value = values[0];

    for (int i = 1; i < size; ++i) {
        if (values[i] > max_value) {
            max_value = values[i];
        }

        if (values[i] < min_value) {
            min_value = values[i];
        }
    }

    // Hiển thị kết quả
    cout << "Gia tri lon nhat cua mang la: " << max_value << endl;
    cout << "Gia tri nho nhat cua mang la : " << min_value << endl;

    return 0;
}
