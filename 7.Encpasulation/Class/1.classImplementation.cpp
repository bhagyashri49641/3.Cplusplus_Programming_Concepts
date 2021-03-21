//class implementation

#include<iostream>
using namespace std;

class item
{
	private:
		int number;  //data member 
		float cost;  // data member
	public:
		void getdata(int a,float b);  //prototype declaration of member function

		void putdata(void)  // this function is defined inside the class itself .....this must be short like inline function
		{
			cout<<"Number="<<number<<"\n";
			cout<<"Cost="<<cost<<"\n";
		}
};

void item::getdata(int a,float b)   //class lable must be there for difinition of member function outside the class
{
	number=a;  // we can use private varibles of class directly inside the definition 
	cost=b;
}

//-----------------------main function------------------------------
int main()
{
	item obj1;		//create object

	cout<<"\n object obj1"<<"\n";
	obj1.getdata(100,299.95);		//call member function using object
	obj1.putdata();					//call member function using object

	item obj2;						//create another object
	cout<<"\n object obj2"<<"\n";	
	obj2.getdata(200,175.50);		//call member function using second object	
	obj2.putdata();					//call member function using second object

	return 0;
}