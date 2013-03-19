#include <iostream>

using namespace std;

class base
{
    public:
    virtual void showdata()
    {
        cout<<"base";
    }
};
class derv1:public base
{
    public:
    void show()
    {
        cout<<"derv1";
    }
};
class derv2:public base
{
    public:
    void show()
    {

        cout<<"derv2";

    }
};
int main()
{
    derv1 dv1;
    derv2 dv2;
    base*ptr;
    ptr=&dv1;
    ptr->showdata();
    ptr=&dv2;
    ptr->showdata();
}
