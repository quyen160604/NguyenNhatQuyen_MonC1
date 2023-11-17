#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
    string title;
    string director;
    int yearReleased;
    int runningTime; 
};
//hàm để hiển thông tin về phim
void displayMovieInfo(const MovieData& movie)
{
    cout << "Tieu de :" << movie.title << endl;
    cout << "Dao dien:" << movie.director<< endl;
    cout << "Nam phat hanh :" << movie.yearReleased << endl;
    cout << "Thoi luong:" << movie.runningTime << "Phut" << endl;
}
int main()
{
    //Tạo hai biêns movie và lưu gía trị trong các thành viên của chúng
    MovieData movie1;
    movie1.title = "The shawshank Redemption" ;
    movie1.director = "Fank Daranot";
    movie1.yearReleased= 1994;
    movie1.runningTime  = 142;

    MovieData movie2;
    movie2.title = "The GodFather";
    movie2.director = "Francis Ford Coppola";
    movie2.yearReleased = 1972;
    movie2.runningTime = 175;

    //hiển thị thông tin về phim bằng cách sử dụng hàm
    cout << "Thong tin Phim 1:" << endl;
    displayMovieInfo(movie1);

    cout << "Thong tin phim 2 :" << endl;
    displayMovieInfo(movie2);
    return 0 ;
    
}
