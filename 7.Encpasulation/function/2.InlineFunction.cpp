// A inline function is a function that is expanded in line when it is invokwd ,
//that is, the compiler replaces the function call with the corresponding function code
#include<iostream>
using namespace std;

inline float mult(float x, float y)
{
	return(x*y);
}

inline double div( double p,double q)
{
	return(p/q);
}

int main()
{
	float a=12.345;
	float b=9.82;

	cout<<mult(a,b)<<"\n";
	cout<<div(a,b)<<"\n";
	return 0;

}