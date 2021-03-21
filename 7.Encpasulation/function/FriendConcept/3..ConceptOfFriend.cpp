//Concept of friend in c++
 #include<iostream>
using namespace std;
class main_class;
void mun();
void gun(main_class, int);
class fun_class;
class Friend_class;



///////////////////////// main function //////////////////////////
int main()
{
	main_class obj;
	
	
	fun_class fobj;
	fobj.fun(obj);

	gun(obj,100);

	mun();

	Friend_class sobj;
	Friend.sun(object);

	return 0;
}

////////////////////////////////// friend class //////////////////////////
class fun_class
{
public:
	void fun(main_class);//declaration
};
void fun_class :: fun(main_class m) //definition
{
	m.i=20;
	cout<<"inside fun function of fun_class"<<"\n";
	cout << m.i <<"\n";
}

////////////////////////// global friend function ///////////////////
void gun(main_class m,int j)
{
	m.i=m.i + j;
	cout<<"Inside global gun function"<<endl;
	cout<<m.i<<endl;
}
///////////////////////// global friend function ///////////////////

////////////////////////// entire Friend_class is friend of main_class /////////////
class Friend_class
{
	private:
		int x;
	public:
		Friend_class() //constructor
		{
			x=200;
		}

		Friend(main_class m); //this is member function of Friend_class
};

// member function definition
void Friend_class :: Friend(main_class m)
{
	m.i = m.i + x;
	cout << "Inside Frind_class "<<"\n";
	cout<< "updated value of i is :" << m.i;
}

/////////////////////////////////  main_class ///////////////////////////////////
class main_class
{
	private:
		int i;
	public:
		main_class()  //constructor
		{
			cout<<"Inside constructor of main class"<<endl;
			i=10;
			cout<<i<<endl;
		}

		//making other functions friend to this class

		// fun function of fun_class is friend to main class
		// with pointer to object of main_class as parameter
	//	friend void fun_class :: fun(main_class m);

		//global function gun is friend to the main class
		// with pointerto main_class object and one integer j as parameters
	//	friend void gun(main_class m,int j);

		//global function mun is friend to the main_class 
		//without any parameters
		friend void mun();

		//entire sun_class is friend to the main_class
	//	friend class sun_class;
};

void mun()
{
	main_class obj;
	obj.i=30;
	cout<<"inside global mun function"<<"\n";
	cout<< obj.i <<endl;
}