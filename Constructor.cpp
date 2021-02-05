#include<iostream>
using namespace std;

class Employee1{
    public:
    string EmpName;
    string EmpCompany;
    int EmpAge;

    void display(){
        cout<<"Employe Name: "<<EmpName<<"| company: "<<EmpCompany<<"| Age : "<<EmpAge<<endl;
    }

    //Constructor
    Employee1(string Name, string companyName, int age){
        EmpName = Name;
        EmpCompany = companyName;
        EmpAge = age;
    }

};

int main(){
    Employee1 e1 = Employee1("Mr.spkie","Yt",21);
    Employee1 e2 = Employee1("Mr.Jhon","amazon",24);
    
    e1.display();
    e2.display();
    return 0;
}