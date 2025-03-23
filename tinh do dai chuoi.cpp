#include <iostream>
using namespace std;
int main (){
	char chuoi[100];
	cout <<"Nhap vao mot chuoi: ";
	cin.getline(chuoi, 100);
	cout << "Chuoi vua nhap: " << chuoi << endl;
	int doDai = 0;
	while (chuoi[doDai] != '\0') {
		doDai++; 
	} 
	cout << "Do dai cua chuoi: " << doDai << endl;
	return 0; 
}
