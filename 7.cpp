#include<iostream>
#include<string>
using namespace std;
class Person
{
protected:
     string name;
     int age;
public:
     Person(){cout<<"person default"<<endl;}
     Person(string name,int age)
     {
          this->name=name;
          this->age=age;
          cout<<"person perameterize called"<<endl;
     }
};
class Student:public Person
{
     int rank;
public:
     Student():Person()
     {
          cout<<"Student default"<<endl;
     }
     Student(int rank,string name,int age):Person(name,age)
     {
          this->rank=rank;
          cout<<"Student parameterize called"<<endl;
     }
     void show()
     {
          cout<<"Student Name : "<<name<<endl<<"Age          : "<<age<<endl<<"Rank         : "<<rank<<endl;
     }
};
int main()
{
     Student s1(2,"Saurabh kumar",18);
     s1.show();
     return 0;
}

