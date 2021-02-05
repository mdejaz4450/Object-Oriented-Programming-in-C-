#include<iostream>
using namespace std;

class Employee{
public:
    string Name;
    string Company;
    int Age;

    void IntroduceYourself(string name, string company, int age)
    {
    cout<<"Hello my name is "<<name<<" and my age is "<<age<<" and i worked in a "<<company;
    }

}; 
int main(){
    Employee employee1; //object
    employee1.Name = "Mr.spkie";
    employee1.Company = "YouTube";
    employee1.Age = 21;

   // employee1.IntroduceYourself(employee1.Name, employee1.Company, employee1.Age);

 
    return 0;
}
