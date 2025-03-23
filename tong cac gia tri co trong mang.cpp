#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	int arr[n];
	int sum = 0;
	cout << "Nhap " << n << " phan tu ";
	for (int i = 0; i < n; i++){
		cin >> arr[i];
		sum += arr[i]; 
	} 
	cout << "Cac phan tu trong mang: ";
	for (int i=0; i < n; i++){
		cout << arr[i] << "  "; 
	} 
	cout << endl; 
	cout << "Tong cac gia tri trong mang: " << sum << endl;
	return 0; 
}
