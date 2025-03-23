int timSoLonNhat (int arr[], int n){
	int max = arr[0];
	for (int i = 1; i < n; i++){
		if (arr [i] > max){
			max = arr[i]; 
		} 
	} 
	return max; 
} 
int main (){
	int n;
	int arr[MAX_SIZE];
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	cout <<"Nhap gia tri cho cac phan tu: ";
	for (int i = 0; i < n; i++){
		cin >> arr[i]; 
	} 
	int max = timSoLonNhat(arr,n);
	cout <<"So lon nhat trong mang la: " << max << endl;
	return 0; 
}
