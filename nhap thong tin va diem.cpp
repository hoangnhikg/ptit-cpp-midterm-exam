#include <iostream>
#include <string>
using namespace std;
struct HocSinh {
    string hoTen;
    float diemHKI;
    float diemHKII;
};
float tinhDiemTrungBinh(const HocSinh &hs) {
    return (hs.diemHKI + (hs.diemHKII * 2)) / 3;
}
int main() {
    HocSinh hs;
    cout << "Nhap ho ten sinh vien: ";
    getline(cin, hs.hoTen);
    cout << "Nhap diem trung binh HKI: ";
    cin >> hs.diemHKI;
    cout << "Nhap diem trung binh HKII: ";
    cin >> hs.diemHKII;
    float diemTB = tinhDiemTrungBinh(hs);
    cout << "\nThong tin sinh vien:\n";
    cout << "Ho ten: " << hs.hoTen << endl;
    cout << "Diem trung binh ca nam: " << diemTB << endl;
    return 0;
}
