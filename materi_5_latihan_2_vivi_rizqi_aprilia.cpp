#include <iostream>

using namespace std;
int perkaian(int x, int y, int z){
	int hasil;
	
	hasil = x * y * z;
	cout<<"Hasil : "<<hasil<<endl;
	return hasil;
}

int main()
{
	int p, l, t, hasil;
	
	cout << "masukkan panjang balok	: ";
	cin >> p;
	
	cout << "masukkan lebar balok	: ";
	cin >> l;
	
	cout << "masukkan tinggi balok	: ";
	cin >> t;
	
	hasil = p*l*t;
	
	cout << "luas balok adalah " << hasil << endl;
	
	 
	system ("pause");
	return 0;
	
}
