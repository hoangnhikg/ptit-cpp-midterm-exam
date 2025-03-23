struct SinhVien {
	string hoTen;
	int tuoi;
	float diem; 
}; 
int main (){
	SinhVien sv;
	cout << "Nhap thong tin sinh vien" << endl;
	cout << "Ho ten: ";
	getline(cin,sv.hoTen);
	cout << "Tuoi: ";
	cin >> sv.tuoi;
	cout << "Diem: ";
	cin >> sv.diem;
	cout << "\nThong tin sinh vien" << endl;
	cout << "Ho ten: " << sv.hoTen << endl;
	cout << "Tuoi: " << sv.tuoi << endl;
	cout << "Diem: " << sv.diem << endl;
	return 0; 
	 
}
