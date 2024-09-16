#include <iostream>
using namespace std;
class Test 
{
    public: 
    int a;
    int b;
    void getData()
    {
        a=10;
        b=20;
    }
    friend Test add( Test x, Test y);
};

Test add(Test x, Test y)
{
    Test temp ;
    temp.a = x.a + y.a;
    temp.b = x.b + y.b;////////////////////////////////////////////////////////////////////;/;////////////

    return temp;
}
int main()
{
Test x,y,temp;
x.getData();
y.getData();
temp = add(x,y);
cout<<temp.a<<endl;
cout<<temp.b<<endl;

return 0;
}