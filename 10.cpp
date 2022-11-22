#include<iostream>
using namespace std;
class Player
{
     int player_no,no_of_match;
     char name[20];
     int *goal;
public:
     Player()
     {
          cout<<"\nEnter a Player no  :  ";
          cin>>player_no;
          cout<<"\nEnter a Player name  :  ";
          cin>>name;
          cout<<"\nEnter a no of match  :  ";
          cin>>no_of_match;
          cout<<"\nEnter a goals in "<<no_of_match<<" matches";
          for(int i=0;i<no_of_match;i++)
          {
               cout<<endl<<i+1<<" match goals  :  ";
              cin>>goal[i];
          }

     }
     void display()
     {
          cout<<"------------------------------------------"<<endl;
          cout<<"------------------------------------------"<<endl;
          cout<<"\nPlayer no          :  "<<player_no;
          cout<<"\nPlayer name        :  "<<name;
          cout<<"\nNumber of matches  :  "<<no_of_match;
          for(int i=0;i<no_of_match;i++)
               cout<<endl<<i+1<<" match goals is   :  "<<*(goal+i);
          cout<<"\n------------------------------------------"<<endl;
          cout<<"\n------------------------------------------"<<endl;
     }
};
int main()
{
     Player p1;
     p1.display();
     return 0;
}
