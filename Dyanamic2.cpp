#include<iostream>
using namespace std;

class Demo
{
    public:
         int x;
         int y;

         Demo()
         {
             cout<<"Inside constructor"<<"\n";
         }
         ~Demo()
         {
             cout<<"Inside destructor"<<"\n";
         }
         void Fun()
         {
             cout<<"Inside fun"<<\n";
         }        
};

int main()
{
    //Demo obj1;

     Demo *ptr = NULL;
     ptr = new Demo;
     ptr->Fun();
     delete ptr;

     return 0;
}