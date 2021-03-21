#include<iostream>
using namespace std;

class sample
{
private:
	int data1;
	char data2;
public:
	void set(int i,char c)
	{
		data1=i;
		data2=c;
	}
	void display()
	{
		cout<<"data1="<<data1<<endl; //endl is manipulator that inserts new line
		cout<<"data2="<<data2<<"\n";
	}
};

int main()
{
	sample *s_ptr;
	try
	{
		s_ptr =new sample;
	}
	catch(bad_alloc ba)
	{
		cout<< "bad allocation occured ....prog will terminate now..\n";
		return -1;
	}
	s_ptr-> set(25,'A');
	s_ptr-> display();

	delete s_ptr;
	
}