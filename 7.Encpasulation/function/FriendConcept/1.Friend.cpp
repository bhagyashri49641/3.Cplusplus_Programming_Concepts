#include<iostream>
using namespace std;

class sample
{
public:
	int a;
	int b;
public:
	void setvalue()  //member function
	{
		a=25;
		b=40;
	}
	friend float mean(sample s); //definition of friend function
};

float mean(sample s) // mean is global function
{
	return float(s.a + s.b)/2.0;
}

int main()
{
	sample X;  //object X
	X.setvalue();
	cout<<"Mean value= "<<mean(X)<<"\n";
	return 0;
}