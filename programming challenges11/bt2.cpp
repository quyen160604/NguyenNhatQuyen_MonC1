#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
    double profitOrLoss; // Đưa profitOrLoss vào cấu trúc
};

// Hàm để hiển thị thông tin về phim
void displayMovieInfo(const MovieData& movie)
{
    cout << "Tieu de: " << movie.title << endl;
    cout << "Dao dien: " << movie.director << endl;
    cout << "Nam phat hanh: " << movie.yearReleased << endl;
    cout << "Thoi luong: " << movie.runningTime << " Phut" << endl;
    cout << "Loi nhuan/thua lo nam dau tien: $" << movie.profitOrLoss << endl;
}

int main()
{
    // Tạo hai biến movie và lưu giá trị trong các thành viên của chúng
    MovieData movie1;
    movie1.title = "The Shawshank Redemption";
    movie1.director = "Frank Darabont";
    movie1.yearReleased = 1994;
    movie1.runningTime = 142;
    movie1.productionCost = 25000000.0; // Ví dụ về chi phí sản xuất
    movie1.firstYearRevenue = 30000000.0; // Ví dụ về doanh thu năm đầu tiên
    movie1.profitOrLoss = movie1.firstYearRevenue - movie1.productionCost; // Tính toán lợi nhuận/thua lỗ

    MovieData movie2;
    movie2.title = "The Godfather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;
    movie2.productionCost = 6000000.0; // Ví dụ về chi phí sản xuất
    movie2.firstYearRevenue = 15000000.0; // Ví dụ về doanh thu năm đầu tiên
    movie2.profitOrLoss = movie2.firstYearRevenue - movie2.productionCost; // Tính toán lợi nhuận/thua lỗ

    // Hiển thị thông tin về phim bằng cách sử dụng hàm
    cout << "Thong tin Phim 1:" << endl;
    displayMovieInfo(movie1);

    cout << "Thong tin phim 2 :" << endl;
    displayMovieInfo(movie2);

    return 0;
}
