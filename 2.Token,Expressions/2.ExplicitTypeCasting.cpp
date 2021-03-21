#include<iostream>
using namespace std;
int main()
{
	int intvar=25;
	float floatvar=35.627;

	cout<<"intvar="<<intvar<<endl;
	cout<<"floatvar="<<floatvar<<endl;

	cout<<"float(intvar)="<<float(intvar)<<endl;
	cout<<"int(floatvar)="<<int(floatvar)<<endl;

	return 0;
	
}

/*
output
intvar=25
floatvar=35.87
float(intvar)=25
int(floatvar)=35
*/
