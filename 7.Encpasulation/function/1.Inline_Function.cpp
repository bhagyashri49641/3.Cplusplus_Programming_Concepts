/*
	THIS PROGRAM ILLUSTRATES ABOUT :
		the concept of 'inline' function 
*/

// An inline function is a function that is expanded i line when it is invoked.
// that is the compiler replaces the function call with the corrosponding function code.


/*
remember that the inline keyword merely send a request , not a command to the compiler . The compiler may ignore this request if the function definition is too long or too complecated and compiles the function as a normal function.
*/
#include<iostream>

using namespace std;

class demo
{
	public:
		int i;

		// This function is by default considered as an inline function
		void fun()
		{
			cout<<"Inside function fun"<<endl;
		}

		inline void gun(); 
};
// this is defination of class demo member function
void demo::gun()
{
	cout<<"Inside function gun"<<endl;
}

int main()
{
	demo dobj;

	dobj.fun();
	dobj.gun();

	return 0;
}
