// example of arrays within a class

//shopping list
#include<iostream>
using namespace std;

const int m=50;

class ITEMS
{
	private:

	int itemcode[m];
	float itemprice[m];
	int count;

	public:
		void CNT()
		{
			count=0;	//initialise count to 0
		}
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitems(void);
};

//------------------------definition of member functions------------------------

void ITEMS::getitem(void) 		//Assign values to the data members of item
{
	cout<<"Enter code of the item: ";
	cin>>itemcode[count];
	cout<<"Enter item price: ";
	cin>>itemprice[count];
	count++;
}

void ITEMS::displaysum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	{
		sum=sum+itemprice[i];
	}
	cout<<"\n Total value :"<<sum<<"\n";	
}

void ITEMS::remove(void)
{
	int a;
	cout<<"Enter item code:";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if(itemcode[i]==a)
			itemprice[i]=0;
	}
}

void ITEMS::displayitems(void)
{
	cout<<"\ncode   Price\n";
	for(int i=0;i<count;i++)
	{
		cout<<itemcode[i]<<"\t";
		cout<<"  "<<itemprice[i]<<"\n";
	}
}


//--------------------main function--------------------------
int main()
{
	ITEMS order; 		// object creation
	order.CNT();
	int x;
	do
	{
		cout<<"\n you can do the following: ";
		
		cout<<"\n 1. Add an item";
		cout<<"\n 2. Display total value";
		cout<<"\n 3. Delete an item";
		cout<<"\n 4. Display all list";
		cout<<"\n 5. Quit";

		cout<<"\n\n Enter appropriate number:";
		cin>>x;

		switch(x)
		{
			case 1:order.getitem();
					break;
			case 2:order.displaysum();
					break;
			case 3:order.remove();
					break;
			case 4:order.displayitems();
					break;
			case 5:break;
			default:cout<<"Invalid input";
		}
	}while(x!=5);

	return 0;
}