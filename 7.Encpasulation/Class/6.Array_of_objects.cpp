#include<iostream>
using namespace std;

class employee
{
	char name[30];
	float age;

public:
	void getdata();
	void putdata();

};

void employee :: getdata(void)
{
	cout <<"Employee name :";
	cin>>name;
	cout<<"enter age: " ;
	cin>>age;
}

void employee ::putdata(void)
{
	cout<<"Name : "<< name<<"\n";
	cout<<"age :"<<age<<"\n";
}

const int size=3;
int main()
{
	employee manager[size];
	for(int i=0;i<size;i++)
	{
		cout<<"\nDetails of manger :"<<i+1<<endl;
		manager[i].getdata();
	}
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\nmanager "<<i+1<<endl;
		manager[i].putdata();
	}
	return 0;
}
