#include <iostream>
using namespace std;
 
int main () {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	long long S = 0;
	for (int i = 1; i <= n; i++){
		S += i; 
	} 
	cout <<"Tong S = " << S << endl;
	return 0; 
}
