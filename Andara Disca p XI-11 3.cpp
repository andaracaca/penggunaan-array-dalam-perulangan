#include <cstdlib>
#include <iostream>
using namespace std;
int main()
{
	int i;
	float bi1[7], jumlah=0.0, rata2;
	for(i = 0; i < 7; ++i)
	{
	cout <<i+1<< ". Masukkan Angka ke-" <<i+1<<" : ";
	cin >> bi1[i];
	while (bi1 [i] > 100 ||bi1[i] <= 0)
	{
	cout << " Error! Angka di antara 1 s/d 100" << endl;
	cout <<i+1<< ". Masukkan Angka ke-" <<i+1<< " : ";
	cin >> bi1[i];
	}
	
	jumlah += bi1[i];
	}
	rata2 = jumlah / 7;
	cout << "Rata2 Bilangan di atas = " << rata2 << endl;
	
	system ("PAUSE");
	return 0;
}



