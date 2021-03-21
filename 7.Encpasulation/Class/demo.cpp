#include<iostream>

using  namespace std;

class Maths
{
    public:
        int value1,value2;
        
        Maths(int a = 0, int b = 0) // Parametrised constructor with default argument
        {
            cout<<"Inside Base Constructor : Maths\n";
            value1 = a;
            value2 = b;
        }

        ~Maths()
        {
            cout<<"Inside Base Destructor : Maths\n";
        }

        int Add()
        {
            return value1 + value2;
        }
};

class Calculator : public Maths
{
    public:
        int Result;
        
        Calculator(int x = 0, int y = 0) : Maths(x,y)
        {
            cout<<"Inside Derived Constructor : Calculator\n";
            Result = 0;
        }

        ~Calculator()
        {
            cout<<"Inside Derived Destructor : Calculator\n";
        }
        int Sub()
        {
            return value1 - value2;
        }
        
        void Max()
        {
            if(value1 > value2)
            {
                Result = value1;
            }
            else
            {
                Result = value2;
            }
        }
};

int main()
{
    Maths mobj1;
    Maths mobj2(20);
    Maths mobj3(10,20);

    Calculator cobj1;
    Calculator cobj2(10);
    Calculator cobj3(10,20);

    cout<<"Sizeof base class is : "<<sizeof(Maths)<<"\n";
    cout<<"Sizeof derived class is : "<<sizeof(Calculator)<<"\n";

    int ret = 0;
    ret = cobj3.Add();
    cout<<"Addition is : "<<ret<<"\n";

    ret = cobj3.Sub();
    cout<<"Substraction is : "<<ret<<"\n";

    cobj3.Max();
    cout<<"Maximum is : "<<cobj3.Result<<"\n";

    return 0;
}





