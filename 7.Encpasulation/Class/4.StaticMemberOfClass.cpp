//Static data member is initialised to zero after the object of class is created
//only one copy is created
//only visible in the class but available entire program

#include<iostream>
using namespace std;

class item
{
	private:
	static int count;
	int number;
	public:
	static int reg;
	void getdata(int a)
	{
	number=a;
	count++;
	}
	void getcount()
	{
	cout<<"Count="<<count<<endl;
	}
	
	
} ;

int item ::count; //int item ::count=10;  we can also initialise it to another value at thetime of defination
int item ::reg=10;

int main()
{
item a,b,c;
a.getcount();
b.getcount();
c.getcount();

a.getdata(100);
b.getdata(200);
c.getdata(300);

cout<<"After inserting data"<<endl;
a.getcount();
b.getcount();
c.getcount();
cout<<a.reg; //pulic static data object ch naav use krun access krta yet
// pn static member public aso ki private ....object use krun call nahi krta yet


return 0;
}


/*
OUTPUT

Count=0
Count=0
Count=0
After inserting data
Count=3
Count=3
Count=3

*/