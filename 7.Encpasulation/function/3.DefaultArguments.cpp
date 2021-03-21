//Default arguments 

#include<iostream>
using namespace std;

float value(float p,int n, float r=0.15); //prototype
void printline(char ch='#',int len=40); //prototype

int main()
{
	float amount;

	printline(); // uses both defalut values

	amount =value(5000.00,5);  //uses default for 3rd argument
	cout<<"\nFinal Value="<<amount<<"\n";


	amount = value(10000.00,5,0.30); // pass all arguments explicitly
	cout<<"\nFinal Value="<<amount<<"\n";

	printline('*');// uses default value for second argument 
	
	return 0;
}
float value(float p,int n, float r) //definition
{
	int year=1;
	float sum=p;

	while(year<=n)
	{
		sum=sum*(1+r);
	
	year=year+1;
	}
	return sum;
}

void printline(char ch,int len) //prototype
{
	for(int i=1;i<=len;i++)
		{cout<<ch;}
	
	cout<<"\n";

}
