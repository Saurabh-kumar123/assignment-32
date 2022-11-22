#include<iostream>
using namespace std;
class Float
{
   float x;
   public:
   Float(){}
   void setdata(float x)
   {
    this->x=x;
   }
   void showdata()
   {
    cout<<"x : "<<x<<endl;
   }
   Float operator+(Float a)
   {
    Float temp;
    cout<<"ADD function"<<endl;
    temp.x = x + a.x;
    return temp;
   }
   Float operator-(Float a)
   {
    Float temp;
    cout<<"SUB function"<<endl;
    temp.x = x - a.x;
    return temp;
   }
   Float operator*(Float a)
   {
    Float temp;
    cout<<"MULT function"<<endl;
    temp.x = x * a.x;
    return temp;
   }
   Float operator/(Float a)
   {
    Float temp;
    cout<<"DIV function"<<endl;
    temp.x = x / a.x;
    return temp;
   }
};
int main()
{
    Float c1,c2,c3,c4,c5,c6;
    c1.setdata(20);
    c2.setdata(10);
    c3=c1+c2;
    c3.showdata();
    c4=c3-c1;
    c4.showdata();
    c5=c4*c3;
    c5.showdata();
    c6=c3/c4;
    c6.showdata();
    return 0;
}
