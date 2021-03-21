//Factorial of number using recursion

#include<iostream>
 using namespace std;

 long fact(int n)
 {
 	if(n==0) // base case
 		return 1;

 	return (n*fact(n-1)); // recursive function call
 }

 int main()
 {
 	int num;
 	cout<<"Enter a positive integer:";
 	cin>>num;

 	cout<<"Factorial of \t"<<num << "is\t"<<  fact(num)     <<"\n";   
 										    // function call
 	return 0;

 }