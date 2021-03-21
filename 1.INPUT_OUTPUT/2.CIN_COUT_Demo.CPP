// a program to accept data and display
using namespace std; // to use standerd library functions 
#include <iostream> //header file contains declarations for the identifier cout and the operator <<(Operator overloading) 


int main()
{
	int age;
	char name[15];
	
	cout << "Enter your name and age :- "; //inserts the contents of the variable on its right to the object on its left
	cin >> name >> age; // extract or takes the value from keyboard and assigns it to the variable on its right
	cout << "Dear " << name << ", next year your age will be " << age+1<<"\n";
	
	return 0;
}