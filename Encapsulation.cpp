
// What is Encapsulation -: Encapsulation in C++ is implemented using classes that are user defined data types.
//These classes contain data types as well as methods that are bound together.
// The main purpose of encapsulation is denied the access of members and methods outside the class.
#include <iostream>
using namespace std;

class EncapsulationDemo
{
    // private:
    //Note we can't access outside the class if we define member or function as a private
    // Also you have make getter and setter method to set the value and get the value as public.
    /*
    .\Encapsulation.cpp:17:14: error: 'int Employee2::l' is private within this context
     cout<<e3.l<<endl;
              ^
.\Encapsulation.cpp:10:14: note: declared private here
      int l = 4;
    */
private:
    int l;
    int b;
    int h;

    public:
    void setValue(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }
    
    void volume()
    {
        cout<<"Length = " <<l<<endl;
        cout<<"Breadth = " <<b<<endl;
        cout<<"Heigth = " <<h<<endl;
        cout<<"Volume = " <<l*b*h<<endl;
    }
};

int main()
{
    EncapsulationDemo encap;

    encap.setValue(4,5,8);
    encap.volume(); 
    return 0;
}
