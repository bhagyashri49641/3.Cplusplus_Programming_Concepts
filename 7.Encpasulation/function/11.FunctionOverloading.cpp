//FunctionOverloading
#include<iostream>
using namespace std;

 // Decleration of function prototype

 int area(int);
 int area(int,int);
 double area(double);
 int main()
 {
 	cout<<"Calling the area function for calculating the area of square with side 5=="<<area(5)<<"\n";
 	cout<<"Calling the area function for calculating the area of rectangle with length 5 height 10=="<<area(5,10)<<"\n";
 	cout<<"Calling the area function for calculating the area of circle with radius 5.5=="<<area(5.5)<<"\n";

 	return 0;
 }

 //Function definitions
int area(int side)
{
	return(side*side);		//area of square
}

int area(int length,int breadth)
{
return(length*breadth);		//area of rectangle
}

double area(double radius)
{
	return(3.14*radius*radius);		//area of circle
}
