#include<iostream>
using namespace std;
class fact
{
     int n,t;
public:
     fact(int x)
     {
          n=x;
          t=1;
     }
     int calculate()
     {
          for(int i=1;i<=n;i++)
          t=t*i;
          return t;
     }
     void display()
     {
          cout<<"factorial  is  :  "<<t<<endl;
     }
     fact(fact&x)//copy constractor
     {
          n=x.n;
          t=1;
     }
};
int main()
{
     fact f1(5);
     f1.calculate();
     f1.display();
     fact f2(f1);  //copy constractor
     f2.calculate();
     f2.display();
     return 0;
}
