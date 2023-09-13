#include<iostream>
using namespace std;

int main () {
	double  num1, num2, num3, num4, num5 ; 
	cin >> num1 >> num2 >> num3 >> num4 >> num5 ;
	double max = num1 ;
	double min = num1 ;
	if ( num2 > max ) {
		max = num2 ; 
	}  
	if ( num2 < min) {
		min = num2 ;
	}
	if ( num3 > max ) {
		max = num2 ; 
	}  
	if ( num3 < min) {
		min = num3 ;
	}
	if ( num4 > max ) {
		max = num4 ; 
	}  
	if ( num4 < min) {
		min = num4 ;
	}
	if ( num5 > max ) {
		max = num5 ; 
	}  
	if ( num5 < min) {
		min = num5 ;
	}
	double tich = max +  min ;
	cout << tich << endl;  
	return 0 ;
 }

