#include<iostream>
using namespace std;
class Rectangle
{
     float l,b;
public:
     Rectangle(){}
     int areafun(int a,int b)
     {
          l=a;
          this->b=b;
          return (l*b);
     }
     float areafun(int a,float b)
     {
          l=a;
          this->b=b;
          return (l*b);
     }
     float areafun(float a,int b)
     {
          l=a;
          this->b=b;
          return (l*b);
     }
     double areafun(double a,float b)
     {
          l=a;
          this->b=b;
          return (l*b);
     }
};
int main()
{
     Rectangle r;
     cout<<" Area of Rectangle  :  "<<r.areafun(6,3)<<endl;
     cout<<" Area of Rectangle  :  "<<r.areafun(6,3.4f)<<endl;
     cout<<" Area of Rectangle  :  "<<r.areafun(6.7f,3)<<endl;
     cout<<" Area of Rectangle  :  "<<r.areafun(6.2,3.7f)<<endl;
     return 0;
}
