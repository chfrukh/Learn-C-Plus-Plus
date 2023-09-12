#include <iostream>
#include "Iot.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Iot a;
	int n;
	a.shape(4);
	cout<<"Enter a number for table: ";
	cin>>n;
	a.table(4);
	return 0;
}