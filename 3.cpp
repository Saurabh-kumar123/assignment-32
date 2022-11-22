#include<iostream>
#include<string>
using namespace std;
class Animal
{
     string sound;
public:
     string Sound(){return sound;}
     void set_sound(string sound)
     {
          this->sound=sound;
     }
};
class Dog : public Animal
{
     string dog_sound;
public:
     string Sound(){return dog_sound;}
     void set_sound(string sound)
     {
          this->dog_sound=sound;
     }
};
int main()
{
     Animal cat;
     cat.set_sound("miyaoo");
     cout<<"Sound of cat : "<<cat.Sound()<<endl;
     Dog dog;
     dog.set_sound("Bhowwoo");
     cout<<"Dog sound  :  "<<dog.Sound()<<endl;
     return 0;
}
