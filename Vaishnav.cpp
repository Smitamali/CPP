#include<iostream>
using namespace std;

class Base
{
    public:
    int A,B;
    void fun()
    {
        cout<<"Base fun\n";
    }
    virtual void gun()
    {
        cout<<"Base gun\n";
    }
    virtual void sun()
    {
        cout<<"Base sun\n";
    }
    virtual void run()
    {
        cout<<"Base run\n";
    }
    virtual void mun()
    {
        cout<<"Base mun\n";
    }
};

class Derived: public Base
{
    public:
    int X,Y;
    void gun()
    {
        cout<<"Derived gun\n";
    }
    virtual void run()
    {
        cout<<"Derived run\n";
    }
    
};

int main()
{
 Base *bp = NULL;
 Derived dobj;
 bp = &dobj;              //UPCASTING

 bp->fun();
 bp->gun();
 bp->sun();
 bp->run();
 //bp->mun();

 return 0;
}