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
     void display_Person()
     {
          cout<<"Person Name : "<<name<<endl<<"age    : "<<age<<endl;
     }
};
class Student:public Person
{
     protected:
     int rank;
public:
     Student(int rank,string name,int age):Person(name,age)
     {
          this->rank=rank;
          cout<<"Student parameterize called"<<endl;
     }
     void display_Student()
     {
          display_Person();
          cout<<"Rank  : "<<rank<<endl;
     }
};
class Topper:public Student
{
  int batch;
public:
     Topper(int rank,string name,int age,int batch):Student(rank,name,age)
     {
          this->batch=batch;
          cout<<"Topper parameterize called"<<endl;
     }
     void display_Topper()
     {
          display_Person();
          cout<<"Rank    :  "<<rank<<endl;
          cout<<"Batch   :  "<<batch<<endl;
     }
};
int main()
{
       Topper t1(23,"Saurabh kumar",18,3);
     cout<<endl;
     t1.display_Person();
     cout<<endl;
     t1.display_Student();
     cout<<endl;
     t1.display_Topper();
     return 0;
}


