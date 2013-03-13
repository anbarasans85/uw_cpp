#include <iostream>

using namespace std;

class SimpleClass
{
    public:
        SimpleClass(); //default constructor
        ~SimpleClass(); //destructor
        SimpleClass(const SimpleClass &); //copy constructor
};

SimpleClass::SimpleClass()
{
    cout << "Default Constructor" << endl;
}

SimpleClass::~SimpleClass()
{
    cout << "Destructor" << endl;
}

SimpleClass::SimpleClass(const SimpleClass &arg1)
{
    cout << "Copy Constructor" << endl;
}

void f1(SimpleClass aSimpleClass);
void f2(SimpleClass aSimpleClass);
void f3(SimpleClass &aSimpleClass);
void f4(SimpleClass *aSimpleClass);

int main()
{
    SimpleClass obj1;
    f1(obj1);
    
    return 0;
}

void f1(SimpleClass aSimpleClass)
{
    SimpleClass obj1;
    f2(obj1);
}

void f2(SimpleClass aSimpleClass)
{
    SimpleClass obj1(aSimpleClass);
    f3(obj1);
}

void f3(SimpleClass &aSimpleClass)
{
   f4(&aSimpleClass); 
}

void f4(SimpleClass *aSimpleClass)
{

}
