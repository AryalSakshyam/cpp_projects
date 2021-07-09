#include <iostream>
using namespace std;

class designer
{
    public:
 designer()                                                                   
    {
        cout<<"Constructor of designer"<<endl;
    }
    ~designer()

    {
        cout<<"Destuctor of designer"<<endl;
    }
};    
class LouisVuitton:public designer                          //Inhereting class designer
{
    public:
    LouisVuitton()
    {
        cout<<"Constructor of LouisVuitton"<<endl;
    }
    ~LouisVuitton()

    {
        cout<<"Destuctor of LouisVuitton"<<endl;
    }
};   
class Dior:public designer                       //Inhereting class designer
{
    public:
    Dior()
    {
        cout<<"Constructor of Dior"<<endl;
    }
    ~Dior()

    {
        cout<<"Destuctor of Dior"<<endl;
    }
};   
class versace:public designer                         //Inhereting class designer
{
    public:
    versace()
    {
        cout<<"Constructor of versace"<<endl;
    }
    ~versace()

    {
        cout<<"Destuctor of versace"<<endl;
    }
};   
int main()
{
    LouisVuitton lv;
    Dior d;
    versace v;
}                                                                                                     
