// Static member functions have access only to other static members(variables and functions) within same class
// static member functions can be called using class name not by object name

#include<iostream>
using namespace std;

class test
{
	int code=10;
	static int count;

public:
	void setcode(void)
	{
		code=++count;
	}
	void showcode(void)
	{
		cout<<"Object number:"<<code<<"\n";
	}
	static void showcount(void)
	{
		cout<<"Count:"<<count<<"\n";
	}
};
int test :: count;

int main()
{
	test t1,t2,t3;  // three objects bnvle
	t1.setcode(); 	//
	t2.setcode();
	test:: showcount();
	t3.setcode();
	test::showcount();
	t1.showcode();
	t2.showcode();
	t3.showcode();


	return 0;
}