#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
class Area
{
     float area;
public:
      Area(int r)
     {
          area = r*r;
          cout<<"Area of circle : "<<area<<endl;
          getch();
     }
     Area(int l,int b)
     {
          area = l*b;
          cout<<"Area of rectangle : "<<area<<endl;
          getch();
     }
     Area(int a,int b,int c)
     {
          float f = (a+b+c)/2.0;
          area = sqrt(f*(f-a)*(f-b)*(f-c));
          cout<<"Area of triangle : "<<area<<endl;
          getch();
     }
};
int main()
{
     int n;
     while(1)
     {
          system("cls");
          cout<<"1. Area of Circle"<<endl;
          cout<<"2. Area of Rectangle"<<endl;
          cout<<"3. Area of Triangle"<<endl;
          cout<<"4. Exit"<<endl;
          cout<<"\nEnter a choice :  ";
          cin>>n;
          switch(n)
          {
          case 1:{
               system("cls");
               int r;
               cout<<"Enter a Radious : ";
               cin>>r;
               Area a(r);
               break;}
          case 2:{
               system("cls");
               int l,b;
               cout<<"Enter a Length & Breath : ";
               cin>>l>>b;
               Area a(l,b);
               break;}
          case 3:
               {
               system("cls");
               int l,b,c;
               cout<<"Enter a value of Adges  : ";
               cin>>l>>b>>c;
               Area a(l,b,c);
               break;}
          case 4:
              {exit(0);}
          }
     }
     return 0;
}
