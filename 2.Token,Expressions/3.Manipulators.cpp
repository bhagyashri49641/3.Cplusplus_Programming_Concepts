#include<iostream>
#include<iomanip> // for setw
using namespace std;

int main()
{
	int Basic=950, Allowance=95,Total=1045,Average=10.5426875;

	cout<<setw(10)<<"Basic"<<setw(10)<<Basic<<endl;
	cout<<setw(10)<<"Allowance"<<setw(10)<<Allowance<<endl;
	cout<<setw(10)<<"Total"<<setw(10)<<Total<<endl;

	return 0;

}

/*
output
      Basic       950
  Allowance        95
      Total      1045
  

*/
