#include <iostream>
using namespace std;
int tinhBinhPhuong (int x){
	int binhPhuong = x * x;
	return binhPhuong; 
} 
int main (){
	int num;
	cout << "Nhap mot so nguyen: ";
	cin >> num;
	int result = tinhBinhPhuong(num);
	cout << "Binh phuong cua so " << num << " la: " << result << endl;
	return 0; 
}
