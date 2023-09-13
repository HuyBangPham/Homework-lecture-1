#include<iostream>
using namespace std;

int main () {
    int m , n ;
	int bc ; 
	// kiem tra dieu kien so duong 
	do {
		cout << "Nhap so nguyen duong: " ;
		cin >> m >> n ; 
	} while (m <= 0 || n < 0)  ; 
	int  a = m , b = n ;
	while (a != b) {
		if (a>b) {
			a-=b;
		} else {
			b-=a; 
		}
	} 
	bc = (m*n)/a ;
	cout << "UCLN la: " << a << endl; 
	cout << "BCNN la: " << bc << endl;  
	return 0 ;
 }

