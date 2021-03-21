//Nesting Of Member Functions

//a member function can be called by using its name inside another member function of same class
// ithe dot operator kiva scope resolution vapraychi grj nahi karan apn ekach class chya 
// eka function mdhun dusrya function la call krt ahot 

// below program shows the ones complement of given binary number

#include<iostream>	// for inpt output functions
#include<string.h>  // for string function use

using namespace std;

class binary
{
	string s;
public:
	void read(void)
	{
		cout<<"Enter binary number:"; 
		cin>>s;							//binary number string mdhe ghetla
	}

	void chk_bin(void)
	{
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)!='0'&&s.at(i)!='1')
			{
				cout<<"\n Incorrect binary number format ...the problem will terminate";
				exit(0);
			}
		}
	}

	void ones(void)
	{
		chk_bin();			//calling member function
		for(int i=0;i<s.length();i++)
		{
			if(s.at(i)=='0')
				s.at(i)='1';
			else
				s.at(i)='0';		
		}
	}

	void display(void)
	{
		ones(); 		//calling member function
		cout<<"\n The ones complement of the given binary number is:"<<s;
	}

};

int main()
{
	binary b; 		//creted object of the class binary
	b.read();
	b.display();

	return 0;
}