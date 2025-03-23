#include <iostream>
#include <cstring> 
using namespace std;
void daoNguocChuoi(char str[]){
	int len = strlen(str);
	for (int i = 0; i < len / 2; i++){
		swap(str[i], str[len - i - 1]); 
	} 
} 
int main (){
	char str[100];
	cout << "Nhap chuoi: ";
	cin.getline(str,100);
	cout << "Chuoi ban dau: " << str << endl;
	daoNguocChuoi(str);
	cout <<"Chuoi dao nguoc: " << str << endl;
	return 0;
	 
}
