#include <iostream>
using namespace std ;
int main ()
{
	float tienbd , lai , mongmuon, nam , tam  ;
	int i = 0 ;
	cout << " Nhap so tien gui vao " ;
	cin >> tienbd ; 
	cout << " Nhap phan tram lai suat " ;
	cin >> lai ;
	cout << " Nhap so tien mong muon " ;
	cin >> mongmuon ;
	tam = tienbd ;
	while ( tam < mongmuon )
	{
		tam = tam + tam * lai / 100 ;
		i = i + 1;
		
	}
	cout << " So nam can la : " << i ; 
}
